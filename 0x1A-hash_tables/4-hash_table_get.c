#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (ht != NULL)
	{
		if (key != NULL && strlen(key) > 0)
			index = key_index((unsigned char *)key, ht->size);
		else
			return (NULL);

		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				return (tmp->value);
			}
			tmp = tmp->next;
		}
	}
	return (NULL);
}
