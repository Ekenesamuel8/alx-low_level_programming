#include "lists.h"
/**
* free_listint2 - function that frees a listint_t list.
* @head: pointer to the first node
*/
void free_listint2(listint_t **head)
{
	listint_t *tin;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tin = (*head)->next;
		free(*head);
		*head = tin;
	}
	free(*head);
	*head = NULL;
}
