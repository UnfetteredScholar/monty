#include "monty.h"

/**
 * pstr - prints the string starting at the top of the
 * stack,followed by a new line
 * @head: first element in stack
 * @line_number: the line number
 *
 * Return: void
 */

void pstr(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	if (h != NULL)
	{
		while (h)
		{
			if (!(h->n > 0 && h->n <= 127))
				break;
			printf("%c", h->n);
			h = h->next;
		}
	}
	printf("\n");
}
