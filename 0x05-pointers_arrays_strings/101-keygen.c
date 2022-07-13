#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print password.
 *
 * Return: 0.
 */

int main(void)
{
	int rando;
	int maxvalue = 7000;

	srand(time(NULL));
	rando = rand();

/**
 * The following code shortens the length of the generated number to a
 * desired length by reducing the numerica value
 * The modulus operator becomes pretty handy here 
 */
	printf("%i\n", rando % (maxvalue + 1));
	return (0);
}
