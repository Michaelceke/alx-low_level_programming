#include <stdio.h>

/**
 * main - print possible combination of single-digit numbet printing
 * from 0-9 separated with commas, using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens = '0';
	int unit;

	while (tens <= '9')
	{

		unit = tens + 1;

		while (unit <= '9')

		{
			putchar(tens);
			putchar(unit);


			if (tens != '8' ||  unit != '9')
			{
				putchar(',');
				putchar(' ');
			}

			unit++;

		}

		tens++;
	}
	putchar('\n');

	return (0);
}
