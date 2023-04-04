#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 *
 * @head : pointer to listint_t
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	/* declearing pointer variable */
	listint_t *t;

	if (head == NULL)
		return;

	while (*head)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}

	head = NULL;
}
