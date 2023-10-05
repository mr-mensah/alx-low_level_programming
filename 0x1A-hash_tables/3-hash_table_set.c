#include "hash_tables.h"
/**
 * hash_table_set - function that sets hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
	{
	hash_node_t *new;
	char *va_dup;
	unsigned long int index, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	va_dup = strdup(value);
	if (va_dup == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (j = index; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = va_dup;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(va_dup);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = va_dup;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
