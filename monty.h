#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * struct carry_s - carries data
 * @arg: data
 * @file: pointer to bytecode file
 * @content: cmd line
 * @lifi: swap stck n queue
*/
typedef struct carry_s
{
    char *arg;
    FILE *file;
    char *content;
    int lifi;
}carry_t;
extern carry_t carry;
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
void _push(stack_t **head, unsigned int num);
void _pall(stack_t **head, unsigned int num);
void fr_stck(stack_t *head);
void fnc_queue(stack_t **head, unsigned int counter);
void insert_queue(stack_t **head, int d);
int exc(char *content, stack_t **stack, unsigned int counter, FILE *file);
void insert_node(stack_t **head, int N);

#endif
