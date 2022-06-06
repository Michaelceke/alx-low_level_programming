#include <stdio.h>

/**
 * main - print possible combination of single-digit numbet printing
 * from 0-9 separated with commas, using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int counter = '0';

	while (counter <= '9')
	{
		putchar(counter);

		if (counter != '9')
		{
			putchar(',');
			putchar(' ');
		}

		counter++;
	}
	putchar('\n');

	return (0);
}
