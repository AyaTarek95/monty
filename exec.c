#include "monty.h"
/**
 * exc - execute opcode
 * @stack: head of linked list
 * @content: string in the line
 * @file: monty file's pointer
 * @counter: count of line
 * Return: integer
 */
int exc(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t oplist[] = {
		{"push", _push}, {"pall", _pall},
		{NULL, NULL},
		};
	unsigned int x;
	char *op;

	op = strtok(content, "\n\t");
	if (op && op[0] == '#')
		return (0);
	carry.arg = strtok(NULL, " \n\t");
	while (oplist[x].opcode && op)
	{
		if (strcmp(op, oplist[x].opcode) == 0)
		{	oplist[x].f(stack, counter);
			return (0);
		}
	x++;
	}
	if (op && oplist[x].opcode == NULL)
	{
	fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
	fclose(file);
	free(content);
	fr_stck(*stack);
	exit(EXIT_FAILURE);
	}
return (1);
}
