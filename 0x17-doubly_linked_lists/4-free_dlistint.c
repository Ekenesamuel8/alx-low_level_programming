#include "lists.h"

/**
* free_dlistint - function that free all node int the list
* @head: the head pointer
*/

void free_dlistint(dlistint_t *head)
{
/*declare two pointers*/
	dlistint_t *current, *copy;

/*assign head to one of the nodes*/
	current = head;
	while (current != 0)
	{
		copy = current->next;
/*we copy the next address to copy so we can be able to free it*/
		free(current);
/*and we assign that address to current again*/
		current = copy;
	}
}
