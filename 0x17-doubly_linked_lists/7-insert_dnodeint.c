#include "lists.h"

/**
* insert_dnodeint_at_index - function that a node at a given position
* in the list
* @h: the head pointer pointing to another head
* @idx: the given position you want to insert
* @n: the data you want to store
* Return: the newnode pointer
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newnode;
	unsigned int i = 1;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == 0)
		return (NULL);
	newnode->n = n;
	if (idx < 1)
		return (NULL);

	if (*h == 0)
	{
		newnode->prev = 0;
		newnode->next = 0;
		*h = newnode;
	}

	temp = *h;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);

}
