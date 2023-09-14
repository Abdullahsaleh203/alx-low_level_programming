#include "lists.h"
/**
 * dlistint_len - counts numbers of elements from a list
 * @h: pointer to the start of a linked list
 *
 * Return: return number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
