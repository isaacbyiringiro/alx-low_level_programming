#include "main.h"
/**
 * islower - Check if a character is a lowercase letter.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise.
 */
int _islower(int c) /* check whether number is lowercas*/
{
	if (c >= 97 && c <= 122)
	{
		return (1); /* if it is lowercase*/
	}
	else
	{
		return (0); /* if it is not*/
	}
}
