#include "main.h"

/**
 * print_alphabet - prints all alphabets in lowercase
 * Return: null
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}	
