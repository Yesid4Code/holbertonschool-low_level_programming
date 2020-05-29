#include "hash_tables.h"
/*
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: pointer to the address of the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	/* Allocate memory for hash table*/
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	/* Allocate memory for node in hash table */
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
