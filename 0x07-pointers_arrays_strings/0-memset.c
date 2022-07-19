#include "main.h"

/**
 * _memset - fills string with constant char b upto n bytes
 * @s: pointer to string
 * @b: char constant
 * @n: size of bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
