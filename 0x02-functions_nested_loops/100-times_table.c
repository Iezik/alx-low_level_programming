#include "main.h"

/**
 * times_table - prints the times table from 0 to 9
 * Return: void
 */

void times_table(int n)
{
	int a = 0;
	int b;
	int rep;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
		rep = a * b;
		if (b == 0)
		{
			_putchar('0' + rep);
		}
		else if (rep < 10)
		{
			_putchar(' ');
			_putchar('0' + rep);
		}
		else
		{
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}

		if (b < n)
		{
			_putchar(',');
			_putchar(' ');
		}
		b++;
	}
	_putchar('\n');
	a++;
}
}
