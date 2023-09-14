#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: pointer to beggining of a list
 * Return: the address of the new element
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
