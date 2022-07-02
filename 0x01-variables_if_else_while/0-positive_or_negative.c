#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - messes with n, dont ask me what it means
 * Return: 0 or not, depends, dont ask me, i'm ne to this
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		printf("%d", n);
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else if (n < 0)
		printf("is negative", "\n");
	}
	return (0);
}
