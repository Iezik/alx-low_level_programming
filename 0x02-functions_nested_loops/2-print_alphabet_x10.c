#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets in lowercase ten times
 * Return: null
 */

void print_alphabet_x10(void)
{
	int a = 0;
	char c;
	while (a < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	a++;
	}
}
