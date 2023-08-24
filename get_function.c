#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * get_function - gets function for op code
 * @op: the op code
 *
 * Return: struct with the function
 */
instruction_t get_function(char *op)
{
	instruction_t inst = {NULL, NULL};

	inst.opcode = op;
	if (strcmp(op, "push") == 0)
		inst.f = push;
	else if (strcmp(op, "pall") == 0)
		inst.f = pall_print;
	else if (strcmp(op, "pint") == 0)
		inst.f = pint_func;
	else if (strcmp(op, "pop") == 0)
		inst.f = pop;
	else if (strcmp(op, "nop") == 0)
		inst.f = nop;
	else if (strcmp(op, "swap") == 0)
		inst.f = swap;
	else if (strcmp(op, "add") == 0)
		inst.f = add;
	else if (strcmp(op, "sub") == 0)
		inst.f = sub;
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n",
				ext.line_number, ext.arg1);
		exit_free();
	}
	return (inst);

}
