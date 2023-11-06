#include "hash_tables.h"
/**
 * key_index - function that gets the length of a prefix substring.
 * @key: The first string
 * @size: age of dog
 * Return: return dog
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x = 0;

	x = hash_djb2(key);
	x = x % size;
	return (x);
}
