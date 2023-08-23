#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * push - adds an element to the top of the stack
 * @stack: pointer to the top node of the stack
 * @line_number: the data to be pushed
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	int i = 0;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit_free();
	}
	if (ext.arg2 == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free(new);
		exit_free();
	}
	while (ext.arg2[i] != '\0')
	{
		if (!(ext.arg2[i] >= '0' && ext.arg2[i] <= '9'))
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			free(new);
			exit_free();
		}
		i++;
	}
	new->n = atoi(ext.arg2);
	new->prev = NULL;
	new->next = NULL;

	if (*stack != NULL)
	{
		new->next = *stack;
		(*stack)->prev = new;
	}
	*stack = new;
}
