#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i and is ", n, (n % 10));

	if (ldt == 0)
	{
		printf("%i\n", (n % 10));
	}
	else if (ldt > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
