#include "lists.h"


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy, *temp;
	unsigned int i = 0;

	if (*head == 0)
		return (0);
	temp = *head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	copy = temp;
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(copy);
return (0);
}
