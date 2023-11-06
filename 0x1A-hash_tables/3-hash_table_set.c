#include "hash_tables.h"
/**
 * hash_table_set - function that gets the length of a prefix substring.
 * @ht: the hash_table
 * @key: The first string
 * @value: age of dog
 * Return: return dog
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x;
	hash_node_t *new_node = NULL;

	if (ht == NULL)
		return (0);
	x =  key_index((unsigned char *)key, ht->size);
	if (ht->array[x] != NULL)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = strdup(value);
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[x];
	ht->array[x] = new_node;
	return (1);
}
