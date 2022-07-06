#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : stores our number
 * Return: 0 or 1
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
