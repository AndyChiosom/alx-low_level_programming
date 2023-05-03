#include "lists.h"

/**
 * sum_listint - is coded to calculates the sum of all the data in a listint_t list
 * @head: will show first node in the linked list
 *
 * Return: resulting the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
