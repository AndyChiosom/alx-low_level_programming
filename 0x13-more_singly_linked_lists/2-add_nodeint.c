#include "lists.h"

/**
 * plus_nodeint - include a new node at the beginning of a linked list
 * @head: pointer should be the first node in the list
 * @n: data is used to insert in that new node inside the list
 *
 * Return: pointer to the new node, or 0 if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
