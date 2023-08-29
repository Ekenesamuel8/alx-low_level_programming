#include "lists.h"
/**
* print_listint - print all the element
* @h: pointer to the struct
* Return: the pointer
*/
size_t print_listint(const listint_t *h)
{
	size_t wrt;

	wrt = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		wrt++;
	}
return (wrt);
}
