#include "hash_tables.h"
/**
 * hash_table_get - retrives value from the hash table
 * @ht: hash table
 * @key: key
 *
 * Return: null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indes;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indes = key_index((const unsigned char *)key, ht->size);
	if (indes >= ht->size)
		return (NULL);

	node = ht->array[indes];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
