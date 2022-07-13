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
	long int rando3;
	long int maxvalue = 794;
	int chat;
	int chat2;
	int chat3;
	char che;
	char che2;
	char che3;
	char che4;
	char che5;

	srand(time(NULL));
	rando = rand();
	rando2 = rand();
	rando3 = rand();

	chat = rando % 123;
	chat2 = (rando + rando2) % 123;
	chat3 = chat2 + chat;
	che = chat + chat2 + chat3;
	che2 = rando2 % 123;
	che3 = chat3 + chat;
	che4 = chat3 + chat2;
	che5 = chat + chat3 + chat2 + chat3;

/**
 * The following code shortens the length of the generated number to a
 * desired length by reducing the numerica value
 * The modulus operator becomes pretty handy here 
 */
	printf("%lu%c%c%lu%c%c%lu%c%c\n", rando % (maxvalue + 1), che, che5, rando2 % (maxvalue + 1), che2, che3, rando3 % (maxvalue + 1), che4, che5);
	return (0);
}
