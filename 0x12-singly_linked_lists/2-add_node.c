#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t len;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	/* duplicating str */
	newNode->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	newNode->len = len;
	newNode->next = *head;


	*head = newNode;

	return (*head);
}
