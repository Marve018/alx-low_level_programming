#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 *
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *trvs;

	/* allocate memory to new node */

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	/* check if list is empty */

	if (*head == NULL)
		*head = newnode;
	else
	{
		/* travers the list */

		trvs = *head;

		while (trvs->next != NULL)
			trvs = trvs->next;

		trvs->next = newnode;
	}
	return (newnode);
}
