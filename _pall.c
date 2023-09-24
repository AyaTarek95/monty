#include "monty.h"
/**
 * _pall - print stack
 * @head: stack head
 * @counter: count
 * Return: nothing
*/
void _pall(stack_t **head, unsigned int counter)
{
stack_t *p;
(void)counter;

p = *head;
if (p == NULL)
	return;
while (p)
{
printf("%d\n", p->n);
	p = p->next;
}
}
