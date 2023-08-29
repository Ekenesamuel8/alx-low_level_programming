#include "lists.h"
/**
* free_listint - free the listint
* @head: pointer to the head
*
*/
void free_listint(listint_t *head)
{
	listint_t *tin;

	while ((tin = head) != NULL)
	{
		head = head->next;
		free(tin);
	}
}
