#include <stdio.h>

/**
 * main - print possible combinations of three different
 * digits separated with commas, using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hunds = '0';
	int tens;
	int unit;

	while (hunds <= '9')
	{
		tens = hunds + 1;

		while (tens <= '9')

		{
			unit = tens + 1;

			while (unit <= '9')
			{
				putchar(hunds);
				putchar(tens);
				putchar(unit);

				if (hunds != '7' || tens != '8' || unit != '9')
				{
					putchar(',');
					putchar(' ');
				}

				unit++;
			}

			tens++;

		}

		hunds++;
	}
	putchar('\n');

	return (0);
}
