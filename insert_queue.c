#include "monty.h"
/**
 * fnc_queue - print  top
 * @head: stack head
 * @counter: line count
 * Return: nothing
*/
void fnc_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	carry.lifi = 1;
}

/**
 * insert_queue - add node to the tail stack
 * @n: added value
 * @head: head of the stack
 * Return: no return
*/
void insert_queue(stack_t **head, int n)
{
	stack_t *new_node, *auxi;

	auxi = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (auxi)
	{
		while (auxi->next)
			auxi = auxi->next;
	}
	if (!auxi)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		auxi->next = new_node;
		new_node->prev = auxi;
	}
}
