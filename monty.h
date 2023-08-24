#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct ext_s - contains variables: args, file, content
 * of line
 * @file: Pointer to .m file
 * @content: Content of the line
 * @line_number: stores the current line number
 * @arg1: stores argument 1
 * @arg2: stores argument 2 if applicable else NULL
 *
 * Description: Helps store values throughout the project
 */
typedef struct ext_s
{
	FILE *file;
	char *content;
	int line_number;
	char *arg1;
	char *arg2;
	stack_t *h;
} ext_t;

extern ext_t ext;

void get_args(char *s, const char *t);

instruction_t get_function(char *op);

void free_stack(stack_t *head);

void free_heap(void);

void exit_free(void);

void nop(stack_t **stack, unsigned int line_number);

void push(stack_t **stack, unsigned int line_number);

void pall_print(stack_t **stack, unsigned int line_number);

void pop(stack_t **stack, unsigned int line_number);

void pint_func(stack_t **head, unsigned int line_number);

void swap(stack_t **stack, unsigned int line_number);

void add(stack_t **stack, unsigned int line_number);

void sub(stack_t **stack, unsigned int line_number);

void div_op(stack_t **stack, unsigned int line_number);

void mul_op(stack_t **stack, unsigned int line_number);

void mod(stack_t **stack, unsigned int line_number);

void pchar(stack_t **stack, unsigned int line_number);

void pstr(stack_t **head, unsigned int line_number);

void rotl(stack_t **stack, unsigned int line_number);

void rotr(stack_t **stack, unsigned int line_number);
#endif /* MONTY_H */
