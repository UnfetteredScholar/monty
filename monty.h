#ifndef MONTY_H
#define MONTY_H

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

<<<<<<< HEAD
/**
 * struct ext_s - contains variables: args, file, content
 * of line
 * @file: Pointer to .m file
 * @content: Content of the line
 *
 * Description: Helps store values throughout the project
 */
typedef struct ext_s
{
	FILE *file;
	char *content;
} ext_t;
extern ext_t ext;

=======
void push(stack_t **stack, unsigned int line_number);

void pall_print(stack_t **stack, unsigned int line_number);

void pop(stack_t **stack, unsigned int line_number);
>>>>>>> d76630b1572ec30b95d8f580dca50a3871cbc2d1
#endif /* MONTY_H */
