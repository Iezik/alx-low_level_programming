#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n : number to be checked
 * Return: prints "1 and +" is n is > 0, prints "0 and 0" if n = 0, prints
 * "-1 and -" if n is < 0
 */

int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		probe = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		probe = 0;
		_putchar('0')
	}
	else
	{
		probe = -1;
		_putchar('-');
	}
	return (probe);
}
