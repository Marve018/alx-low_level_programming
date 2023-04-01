#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *mainNode;

	mainNode = head;
	while (mainNode != NULL)
	{
		head = head->next;
		free(mainNode->str);
		free(mainNode);
	}
}
