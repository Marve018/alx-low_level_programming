#include "lists.h"

/**
 * list_len - returns the number of elements in linked `list_t` list
 * @h: head of linked list
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t numE = 0;

	while (h != NULL)
	{
		h = h->next;
		numE++;
	}

	return (numE);
}
