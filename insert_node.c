#include "monty.h"
/**
 * insert_node - add node to  stack
 * @head: head of the stack
 * @n: Added value
 * Return: nothing
*/
void insert_node(stack_t **head, int n)
{

	stack_t *added_node, *auxi;

	auxi = *head;
	added_node = malloc(sizeof(stack_t));
	if (added_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (auxi)
		auxi->prev = added_node;
	added_node->n = n;
	added_node->next = *head;
	added_node->prev = NULL;
	*head = added_node;
}
