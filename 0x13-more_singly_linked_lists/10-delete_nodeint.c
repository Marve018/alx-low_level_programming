#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the node at a given
 *                           index of a listint_t list.
 *
 * @head: A pointer the head of the listint_t list.
 * @index: The index of the node indices starts at 0.
 *
 * Return: On success - 1. failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmpnode, *trvs;
	unsigned int i;

	if (*head == NULL)
		return (-1);/* failure empty list */

	tmpnode = *head;
	if (index == 0)
	{
		/* deleting the head node */
		*head = (*head)->next;
		free(tmpnode);
		return (1);
	}

	/* traverse */
	i = 0;
	while (i < index)
	{
		tmpnode = tmpnode->next;
		i++;

		if (tmpnode == NULL)
			return (-1);

	}
	/* update the node pointer */
	trvs = tmpnode->next;
	tmpnode->next = trvs->next;
	/* free the memory allocated to the node being deleted */
	free(trvs);

	return (1);
}
