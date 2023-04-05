#include "lists.h"

/**
 * get_nodeint_at_index - finds a given node in a linked list
 *
 * @head : points to the head of the linked list
 * @index: index of the node to find (starting at 0)
 *
 * Return: pointer to the desired node
 *         NULL - if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index && head != NULL)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		i++;
	}
	return (head);
}
