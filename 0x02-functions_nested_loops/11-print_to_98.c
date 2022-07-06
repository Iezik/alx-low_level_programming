#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n - 98
 * @n : starting point
 * Return: 0 or 1
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	if (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
