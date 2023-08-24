#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @stack: pointer to the address
 * @line_number: the line number
 *
 * Return: void
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	if ((h == NULL) || (h->next == NULL))
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit_free();
	}
	if (h->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit_free();
	}
	h->next->n %= h->n;

	pop(stack, line_number);
}
