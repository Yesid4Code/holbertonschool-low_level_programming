#include "hash_tables.h"

/**
 * key_index - function that takes the index of the key.
 * @key: is the key.
 * @size: is the size of the array of the hash table.
 *
 * Return: index where the key/value should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
