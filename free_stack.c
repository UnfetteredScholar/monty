#include <stdlib.h>
#include "monty.h"

/**
 * free_stack - frees a dlist
 * @head: the head of the dlist
 *
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *curr = NULL;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
