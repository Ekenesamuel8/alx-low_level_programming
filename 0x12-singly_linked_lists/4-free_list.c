#include "lists.h"
/**
 * free_list - Write a function that frees a list_t list
 * @head: pointer to the head
 *
 */
void free_list(list_t *head)
{
	list_t *weed;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
/*giving the value of this run to weed*/
		weed = head->next;
		free(head->str);
		free(head);
		head = weed;
	}
	free(head->str);
	free(head);
}
