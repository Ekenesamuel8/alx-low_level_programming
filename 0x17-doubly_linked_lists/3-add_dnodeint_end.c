#include "lists.h"

/**
* add_dnodeint_end - funtion that adds a new node at the end of the the list
* @head: the head pointer pointing to another head pointer
* @n: the data that will be stored in the newnode
* Return: return the newnode
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == 0)
		return (NULL);
	newnode->n = n;
	newnode->next = 0;
/**check if head is pointing to something
if not, assign the newnode directly*/
	if (*head == 0)
	{
		newnode->prev = 0;
		*head = newnode;
		return (newnode);
	}

/**since head is not null, then we traverse the 
list to the one that is pointing to null*/
	temp = *head;
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);
}
