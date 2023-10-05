#include "hash_tables.h"
/**
 * hash_table_create - function that creates hash tables
 * @size: size
 * Return: hash
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *shht;
	unsigned long int j;

	shht = malloc(sizeof(hash_table_t));
	if (shht == NULL)
		return (NULL);

	shht->size = size;
	shht->array = malloc(sizeof(hash_node_t *) * size);
	if (shht->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		shht->array[j] = NULL;

	return (shht);
}
