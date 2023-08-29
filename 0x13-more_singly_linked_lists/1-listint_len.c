#include "lists.h"
/**
* listint_len - returns the number of elements in a linked listint_t list.
* @h: pointer to the node
* Return: the total element
*/
size_t listint_len(const listint_t *h)
{
	size_t caut = 0;

	while (h != NULL)
	{
		h = h->next;
		caut++;
	}
	return (caut);
}
