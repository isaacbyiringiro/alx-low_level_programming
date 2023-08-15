#include "main.h"
/**
 * _isalpha - Check if a character is an alphabetic character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c) /* function declaration*/
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
