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
	long int rando;
	long int rando2;
	long int maxvalue = 716287492749186;
	int chat;
	int chat2;
	int chat3;
	char che;

	srand(time(NULL));
	rando = rand();
	rando2 = rand();
	

	chat = rando / rando2;
	chat2 = rando % rando2;
	chat3 = chat2 + chat;
	che = chat + chat2 + chat3;

/**
 * The following code shortens the length of the generated number to a
 * desired length by reducing the numerica value
 * The modulus operator becomes pretty handy here 
 */
	printf("%lu%c%lu\n", rando % (maxvalue + 1), che, rando2);
	return (0);
}
