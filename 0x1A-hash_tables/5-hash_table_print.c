#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int index;
	int flag = 0;

	if (ht != NULL)
	{
		printf("{");

		for (index = 0; index < ht->size; index++)
		{
			tmp = ht->array[index];
			while (tmp != NULL)
			{
				if (flag == 1)
				{
					printf(", ");
				}

				flag = 1;

				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
