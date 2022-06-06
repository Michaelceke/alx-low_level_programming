#include <stdio.h>

/**
 * main - print 0-10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int counter = 0;

	while (counter < 10)
	{
		printf("%i", counter);

		counter++;
	}
	putchar('\n');

	return (0);
}
