#include "lists.h"

/**
 * plus_nodeint_end - includes a node at the end of a linked list
 * @head: pointer should be the first element in the list
 * @n: data is  to be inserted in the new element
 *
 * display: pointer to the new node, or 0 if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
