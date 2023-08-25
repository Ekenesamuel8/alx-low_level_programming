#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of node
 * @str: strings to store
 * Return: address to result
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newyul;
	size_t q, cunt = 0;

	newyul = malloc(sizeof(list_t));
	if (newyul == NULL)
		return (NULL);
	newyul->str = strdup(str);
	q = 0;
	while (str[q] != '\0')
	{
		cunt++;
		q++;
	}
	newyul->len = cunt;
	newyul->next = *head;
	*head = newyul;
	return (*head);
}
