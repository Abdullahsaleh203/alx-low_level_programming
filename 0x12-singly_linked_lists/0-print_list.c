#include "lists.h"
#include <stdio.h>
/**
 * print_list - imrpime todos los elementos de size_t
 * @h: puntero al inicio de la lista
 * Return: retorna el numero de nodos
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	/*usamos un while para obtener el numero nodosen "counter"*/

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			/*procedemos a imprimir los elementos*/
			/*dirigimos el pointer a cada elemento de de la estructura a imprimir*/
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}

		counter++;
		h = h->next;
	}

return (counter); /*retornamos la cantidad de nodos que se representan en i*/
}
