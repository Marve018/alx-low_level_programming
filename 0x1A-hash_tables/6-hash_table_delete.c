#include "hash_tables.h"
/**
 * hash_table_delete - function that gets the length of a prefix substring.
 * @ht: the hash_table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *tmp = NULL, *tmp1 = NULL;

	if (ht == NULL)
		return;
	for (; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			tmp = ht->array[x];
			while (tmp != NULL)
			{
				tmp1 = tmp;
				tmp = tmp->next;
				free(tmp1->key);
				free(tmp1->value);
				free(tmp1);
			}
		}
	}
	free(ht->array);
	free(ht);
}
