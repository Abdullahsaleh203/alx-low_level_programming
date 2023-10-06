#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 0 if an error occurs, otherwise return 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn;
	char *c;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	c = strdup(value);
	if (c == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = c;
			return (1);
		}
	}

	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
	{
		free(c);
		return (0);
	}
	hn->key = strdup(key);
	if (hn->key == NULL)
	{
		free(hn);
		return (0);
	}
	hn->value = c;
	hn->next = ht->array[index];
	ht->array[index] = hn;

	return (1);
}
