#include "lists.h"
/**
 * print_list - prints the elements of a list "list_t".
 * @h: head of singly linked list.
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nlms = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nlms++;
	}
	return (nlms);
}
