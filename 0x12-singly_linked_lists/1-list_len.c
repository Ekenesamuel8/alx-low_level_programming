#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the pointer to the head
 * Return: result
 */
size_t list_len(const list_t *h)
{
	size_t yul = 0;

	while (h != NULL)
	{
		h = h->next;
		yul++;
	}
	return (yul);
}
