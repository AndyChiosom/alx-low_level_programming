#include "lists.h"

/**
 * insert_nodeint_at_index - is used to inserts a new node in a linked list,
 * at a given point in the code line
 * @head: pointer will point to the first node in the list
 * @idx: index  shows where the new node is added on the list
 * @n: data is used to insert in the new node
 *
 * Return: pointer to the new node, or 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
