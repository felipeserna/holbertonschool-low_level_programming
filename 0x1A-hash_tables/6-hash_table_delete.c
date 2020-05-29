#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;
	hash_node_t *aux = NULL;

	if (ht && ht->array)
	{
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
			index += 1;
		}
		free(ht->array);
		free(ht);
	}
}
