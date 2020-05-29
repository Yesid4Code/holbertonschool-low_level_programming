#include "hash_tables.h"

/**
 * hash_table_delete - function that free memory.
 * @ht: pointer to the hash table.
 */
void hash_table_delete(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;
	int flag = 0;

	if (ht)
	{
		printf("{");

		while (index < ht->size)
		{
			tmp = ht->array[index];
			while (tmp)
			{
				aux = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = aux;
			}
			index++;
		}
		free(tmp->array);
		free(ht);
	}
}
