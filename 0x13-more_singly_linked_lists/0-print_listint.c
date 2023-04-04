#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	/* Initialize a counter variable to zero */
	size_t len = 0;

	/* traversing the list */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
