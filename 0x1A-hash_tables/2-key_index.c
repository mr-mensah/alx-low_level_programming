#include "hash_tables.h"
/**
 * key_index - function that gets the index
 * @key: key
 * @size: size
 * Return: 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ssh_in;

	ssh_in = hash_djb2(key);
	if (size != 0)
		return (ssh_in % size);
	return (0);
}
