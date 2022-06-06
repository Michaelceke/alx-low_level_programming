#include <stdio.h>

/**
 * main - print 0-10 using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int counter = '0';

	while (counter <= '9')
	{
		putchar(counter);

		counter++;
	}
	putchar('\n');

	return (0);
}
