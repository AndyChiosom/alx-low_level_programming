#include "lists.h"

/**
 * get_nodeint_at_index - is used to returns the node in a particular index in a linked list
 * @head: displays the first node in the linked list
 * @index: is for the index of the node to return
 *
 * display: pointer to the node which we are searching  for, or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
