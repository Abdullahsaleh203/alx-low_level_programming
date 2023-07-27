#include <stdio.h>
#include "lists.h"
/**
 * list_len - imprime numero de elementos vinculados
 * @h: puntero a structura
 * Return: Retorna numero de elementos vinculados
 **/
size_t list_len(const list_t *h)
{
	const list_t *pointer;
	unsigned int i;/* obtendra numero de elementos vinculados*/

	pointer = h;/*puntero a puntero*/

	for (i = 0; pointer; i++)
	{
		pointer = pointer->next;
	}
	return (i);
}
