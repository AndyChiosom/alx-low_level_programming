#include "lists.h"

/**
 * free_listint2 - this code frees a linked list on the node
 * @head: pointer to the listint_t list to be freed on this code
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
