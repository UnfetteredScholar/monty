#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * sub - subtracts the top element of the stack
 * from the second top element of the stack
 * @stack: pointer to the address
 * @line_number: the line number
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	if ((h == NULL) || (h->next == NULL))
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit_free();
	}
	h->next->n -= h->n;
	pop(stack, line_number);
}
