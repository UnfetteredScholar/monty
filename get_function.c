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
	else if ((strcmp(op, "nop") == 0) || (op[0] == '#'))
		inst.f = nop;
	else if (strcmp(op, "swap") == 0)
		inst.f = swap;
	else if (strcmp(op, "add") == 0)
		inst.f = add;
	else if (strcmp(op, "sub") == 0)
		inst.f = sub;
	else if (strcmp(op, "div") == 0)
		inst.f = div_op;
	else if (strcmp(op, "mul") == 0)
		inst.f = mul_op;
	else if (strcmp(op, "mod") == 0)
		inst.f = mod;
	else if (strcmp(op, "pchar") == 0)
		inst.f = pchar;
	else if (strcmp(op, "pstr") == 0)
		inst.f = pstr;
	else if (strcmp(op, "rotl") == 0)
		inst.f = rotl;
	else if (strcmp(op, "rotr") == 0)
		inst.f = rotr;
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n",
				ext.line_number, ext.arg1);
		exit_free();
	}
	return (inst);

}
