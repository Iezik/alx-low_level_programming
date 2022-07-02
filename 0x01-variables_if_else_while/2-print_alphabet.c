#include <stdio.h>

/**
 * main - prints in lowercase, all letters of the alphabet
 * Return: 0 i guess
 */
int main(void)
{
	char al;

	for (al = "a"; al <= "z"; al++)
	{
		putchar(al);
	}
	putchar("\n");
	return (0);
}
