#include <stdio.h>

void __attribute__ ((constructor)) calledfirst(void);


/**
 * calledfirst - prints before main
 * Return: nothing
 */

void calledfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
