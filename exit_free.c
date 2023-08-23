#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * free_heap - frees all memory allocated
 *
 * Return: void
 */
void free_heap(void)
{
	free_stack(ext.h);
	if (ext.arg1)
		free(ext.arg1);
	if (ext.arg2)
		free(ext.arg2);
	if (ext.content)
		free(ext.content);
}

/**
 * exit_free - frees all memory and exits
 *
 * Return: void
 */
void exit_free(void)
{
	free_heap();
	if (ext.file)
	{
		fclose(ext.file);
		ext.file = NULL;
	}
	exit(EXIT_FAILURE);
}
