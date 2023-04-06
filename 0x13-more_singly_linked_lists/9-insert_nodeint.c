#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node to a linked list
 *                           at a given position
 *
 * @head : pointer to the head of the listint_t list
 * @idx  : index of the list where the new node will be added
 *         (indices start at 0)
 * @n    : value for the new node to be added
 *
 * Return: pointer to the new node,
 *         NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* declear variables to be used */
	listint_t *newnode, *trvs;
	unsigned int i;

	/* allocate memory */
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	trvs = *head;
	for (i = 0; i < idx - 1; i++)
		trvs = trvs->next;

	if (trvs == NULL)
		return (NULL);

	/* insert newnode after previous node */
	newnode->next = trvs->next;
	trvs->next = newnode;

	return (newnode);
}
