#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: Character to check
 *
 * @accept: Character to look for
 *
 * Return: Character
 */

char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				return (s + i);
		}
	}
	return (0);
}
