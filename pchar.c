#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pchar - prints the char at the top of the stack
 * followed by a new line
 * @stack: first element of the stack
 * @line_number: The line number
 *
 * Return: void
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit_free();
	}
	h = *stack;
	if (!(h->n >= 0 && h->n <= 127))
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit_free();
	}
	printf("%c\n", h->n);
}
