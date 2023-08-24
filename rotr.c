#include <stdlib.h>
#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to the address of thehead node of the stack
 * @line_number: the line number
 *
 * Return: void
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *h = NULL;
	(void)line_number;

	if (stack != NULL && *stack != NULL)
	{
		h = *stack;
		while (h->next != NULL)
			h = h->next;
		if (*stack != h)
		{
			h->prev->next = NULL;
			h->prev = NULL;
			h->next = *stack;
			(*stack)->prev = h;
			*stack = h;
		}
	}
}
