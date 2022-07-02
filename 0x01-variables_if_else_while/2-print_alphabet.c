#include <stdio.h>

/**
 * main - prints in lowercase, all letters of the alphabet
 * Return: 0 i guess
 */
int main(void)
{
	char alpha;

	for (alpha = "a"; alpha <= "z"; alpha++)
	{
		putchar(alpha);
	}
	putchar("\n");
	return (0);
}
