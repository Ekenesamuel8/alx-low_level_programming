#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the pointer to the head
 * @str: the strings
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{/*create our new head(teen pointer)*/
	list_t *teen, *tim;
	size_t p, cunt = 0;
/*assign a memory size to it*/
	teen = malloc(sizeof(list_t));
	if (teen == NULL)
		return (NULL);
	teen->str = strdup(str);
/*run over it to know its lenth and store in cunt*/
	for (p = 0; str[p] != '\0'; p++)
		cunt++;
	teen->len = cunt;
/*make the new noad(teen) next value to be null*/
	teen->next = NULL;
/*tim is a temporary variable that holds the head*/
	tim = *head;
/*check if tim(head) is = to null and if is null means no node pointing to it*/
	if (tim == NULL)
		*head = teen;
	else
	{
		while (tim->next != NULL)
		{
			tim = tim->next;
		}
	tim->next = teen;
	}
	return (*head);
}
