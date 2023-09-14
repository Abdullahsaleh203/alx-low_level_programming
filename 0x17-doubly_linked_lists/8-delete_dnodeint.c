#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to beggining of a list
 * @index: the index to at which to insert
 * Return: 1 on succes, or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
		{
			tmp->next->prev = NULL;
		}
		free(tmp);
		return (1);
	}

	while (counter < index)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		counter++;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
