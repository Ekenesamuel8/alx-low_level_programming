#include "lists.h"
/**
* add_nodeint - add a new node to the list
* @head: pointer to the head
* @n: new data to be added
* Return: the pointer
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
/*create new pointer to the new node*/
	listint_t *tin;

	if (head == NULL)
		return (NULL);

/*allocate a memory to the new node*/
	tin = malloc(sizeof(listint_t));
	if (tin == NULL)
		return (NULL);

	if (*head == NULL)
	{
		tin->next = NULL;
	}
	else
		tin->next = *head;

	tin->n = n;
	*head = tin;
	return (*head);
}
