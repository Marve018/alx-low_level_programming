#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 *
 * @head: points to the address of the head of the list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *trvs;
	int data;

	if (*head == NULL)
		return (0);

	trvs = *head;
	data = trvs->n;
	*head = trvs->next;
	free(trvs);

	trvs = NULL;

	return (data);
}
