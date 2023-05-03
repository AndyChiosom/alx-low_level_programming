#include "lists.h"

/**
 * free_listint - this code frees a linked list on the node
 * @head: listint_t list to be freed on this code
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
