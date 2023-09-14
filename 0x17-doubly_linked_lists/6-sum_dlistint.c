#include "lists.h"
/**
 * sum_dlistint - returns a number from a linkedl list
 * @head: pointer to beggining of a list
 * Return: sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	if (head == NULL)
		return (0);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
