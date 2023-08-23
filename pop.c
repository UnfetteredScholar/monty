#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * pop - removes the top element of a stack
 * @stack: pointer to the top node of the stack
 * @line_number: the line number
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	if (h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit_free();
	}
	*stack = h->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(h);
}
