#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
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
				if (flag == 1)
					printf(", ");
				flag = 1;
				printf("'%s' : '%s'", tmp->key, tmp->value);
			}
			index++;
		}

		printf("}\n");
	}
}
