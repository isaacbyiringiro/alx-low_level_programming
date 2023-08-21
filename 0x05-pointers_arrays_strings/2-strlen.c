#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)

{

	int v;

	v = 0;

	while (s[v] != '\0')
	{
	v++;
	}

	return (v);
}
