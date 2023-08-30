#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list,
* and returns the head node’s data (n)
* @head: pointer to the node
* Return: the pointer
*/
int pop_listint(listint_t **head)
{
	int h;
	listint_t *tin;

	if (head == NULL || *head == NULL)
		return (0);
	h = (*head)->n;
	tin = *head;
	*head = (*head)->next;
	free(tin);
	return (h);
}
