#include "lists.h"
/**
* add_nodeint_end - add a node at the end of the list
* @n: value of the node
* @head: pointer to the head
* Return: the head
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *raw;
	listint_t *tin;

	(void)tin;

	raw = malloc(sizeof(listint_t));
	if (raw == NULL)
		return (NULL);

	raw->n = n;
	raw->next = NULL;
	tin = *head;
	if (*head == NULL)
		*head = raw;
	else
	{
		while (tin->next != NULL)
		{
			tin = tin->next;
		}
		tin->next = raw;
	}
	return (*head);
}
