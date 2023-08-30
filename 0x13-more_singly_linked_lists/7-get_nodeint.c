#include "lists.h"
/**
* get_nodeint_at_index -  returns the nth node of a listint_t linked list.
* @head: pointer to the node
* @index: numbers
* Return: pointer to the retriaved node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int h;

	for (h = 0; h > index; h++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
