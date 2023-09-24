#include "monty.h"
/**
 * _push - insert new element
 * @num: count
 * @head: pointer to stack
 * Return: always void
 */
void _push(stack_t **head, unsigned int num)
{
	int x, i = 0, flag = 0;

	if (carry.arg)
	{
		if (carry.arg[0] == '-')
			i++;
		for (; carry.arg[i] != '\0'; i++)
		{
			if (carry.arg[i] > 57 || carry.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(carry.file);
			free(carry.content);
			fr_stck(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(carry.file);
		free(carry.content);
		fr_stck(*head);
		exit(EXIT_FAILURE); }
	x = atoi(carry.arg);
	if (carry.lifi == 0)
		insert_node(head, x);
	else
		insert_queue(head, x);
}
