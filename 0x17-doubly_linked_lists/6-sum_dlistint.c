#include "lists.h"
/**
* sum_dlistint - print the  sum of all the data in the list
* @head: the head pointer
* Return: the sum
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int count = 0;

	if (head == 0)
		return (0);
	temp = head;
	while (temp != 0)
	{
		count += temp->n;
		temp = temp->next;
	}

	return (count);
}
