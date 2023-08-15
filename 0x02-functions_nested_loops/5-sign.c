#include "main.h"
#include <stdio.h>
/**
 * print_sign  - check the code.
 *
 * @n: is int param.
 *
 * Return: Always return 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	printf("+\n");
	}
	else if (n == 0)
	{
	printf("0\n");
	}
	else
	{
	printf("-\n");
	}
	return (0);
}
