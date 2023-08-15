#include "main.h"
#include <stdio.h>
/**
 * print_sign  - check the code.
 *
 * @n: is int param.
 *
 * Return: Always return int.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	printf("+");
	return (1);
	}
	else if (n == 0)
	{
	printf("0");
	return (0);
	}
	else
	{
	printf("-");
	return (-1);
	}
}
