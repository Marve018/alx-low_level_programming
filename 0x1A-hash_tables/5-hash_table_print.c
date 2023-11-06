#include "hash_tables.h"
/**
 * hash_table_print - function that gets the length of a prefix substring.
 * @ht: the hash_table
 * Return: the value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0, t = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;
	printf("{");
	while (x < ht->size)
	{
		if (ht->array[x] != NULL)
		{
			tmp = ht->array[x];
			while (tmp != NULL)
			{
				if (t > 0)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value), t = 1;
				tmp = tmp->next;
			}
		}
		x++;
	}
	printf("}\n");
}
