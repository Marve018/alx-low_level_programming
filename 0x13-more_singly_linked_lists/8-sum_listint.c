#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a linked list
 *
 * @head : pointer to the head of the list
 *
 * Return: sum of all the data (n),
 *         0 - if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		if (head == NULL)
			return (0);
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
