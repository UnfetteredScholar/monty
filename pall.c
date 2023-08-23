#include "monty.h"

/**
 * pall_print - Function that prints all the elements of
 * a stack
 * @head: first element in stack
 * @line_number: void
 *
 * Return: void
 */

void pall_print(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
