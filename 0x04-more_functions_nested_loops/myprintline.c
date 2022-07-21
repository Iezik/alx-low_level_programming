#include <stdio.h>

int main(void)
{
	int n;
	int p = -20;

	for (n = 0; n < p; n++)
	{
		if (n < 0)
		{
			break;
		}
		putchar ('_');
	}
	putchar('\n');
	printf("End of the line");

	return (0);
}
