#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * swap - swaps the top two elements of a stack
 * @stack: pointer to the address of the head node of the stack
 * @line_number: the line number
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;
	int tmp = 0;

	if ((h == NULL) || (h->next == NULL))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit_free();
	}
	tmp = h->n;
	h->n = h->next->n;
	h->next->n = tmp;
}
