#include "lists.h"
/**
* get_dnodeint_at_index - function that returns the nth
* number of node in the list
* @head: the head pointer
* @index: the nth number
* Return: the number of nodes in the list
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp != 0 && count < index)
	{
		count++;
		temp = temp->next;
	}
	if (current == 0)
		return (NULL);
	return (temp);
}
