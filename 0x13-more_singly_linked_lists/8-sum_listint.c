#include "lists.h"
/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list.
* @head: pointer to the node
* Return: nom
*/
int sum_listint(listint_t *head)
{
	int nom = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		nom += head->n;
		head = head->next;
	}
	return (nom);
}
