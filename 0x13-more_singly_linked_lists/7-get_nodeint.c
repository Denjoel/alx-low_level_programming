#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list.
 * @head: First node in the linked list.
 * @index: Index of the node to return.
 * Return: Pointer to the node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
	temp = temp->next;
	j++;
	}

	return (temp ? temp : NULL);
}

