#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table. NULL if it failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	/* Create **array with htable->size = size */

	if (size  > 0)
	{/*create htable with malloc*/
		hash_table = malloc(sizeof(hash_table_t));
		if (!hash_table)
			return (NULL);
		/* Assignament size and array */
		hash_table->size = size;
		hash_table->array = calloc(size, sizeof(hash_node_t *));
		if (!hash_table->array)
		{
			free(hash_table);
			return (NULL);
		}
		/*for (int i = 0; i < size; i++) clean each cell of this array*/
		/*htable->array[i] = NULL;*/

		return (hash_table);
	}
	return (NULL);

}
