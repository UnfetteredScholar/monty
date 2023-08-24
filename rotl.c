#include <stdlib.h>
#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: pointer to the address of thehead node of the stack
 * @line_number: the line number
 *
 * Return: void
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *h = NULL;
	int tmp = 0;
	(void)line_number;

	if (stack != NULL && *stack != NULL)
	{
		h = *stack;
		tmp = h->n;
		while (h->next != NULL)
		{
			h->n = h->next->n;
			h = h->next;
		}
		h->n = tmp;
	}
}
