#include "monty.h"

/**
 * pint_func - Function that prints the value at the top
 * of the stack followed by a new line
 * @head: first element of the stack
 * @line_number: The line number
 *
 * Return: void
 */

void pint_func(stack_t **head, unsigned int line_number)
{
	stack_t *h;

	h = *head;
	if (h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(ext.file);
		free(ext.content);
		free_stack(h);
		exit(EXIT_FAILURE);
	}
	prints("%d\n", h->n);
}
