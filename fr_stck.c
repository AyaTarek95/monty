#include "monty.h"
/**
 * fr_stck - frees memory allocated
 * @head: pointer to head
 * Return: nothing
 */
void fr_stck(stack_t *head)
{
	stack_t *auxi;

	auxi = head;
	while (head)
	{
	auxi = head->next;
	free(head);
	head = auxi;
	}
}
