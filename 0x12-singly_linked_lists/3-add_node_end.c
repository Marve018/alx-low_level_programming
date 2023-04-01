#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: pointer to string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *mainNode;
	size_t lenn;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (lenn = 0; str[lenn]; lenn++)
		;

	newNode->len = lenn;
	newNode->next = NULL;
	mainNode = *head;

	if (mainNode == NULL)
	{
		*head = newNode;
	}
	else
	{
		mainNode = *head;

		while (mainNode->next != NULL)
			mainNode = mainNode->next;

		mainNode->next = newNode;
	}

	return (*head);
}
