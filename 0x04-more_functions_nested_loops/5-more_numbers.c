#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 * from 0 -14 followed by a new line
 */

void more_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		char a = '0';

		while (a <= '14')
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			a++;
		}
	}
	_putchar('\n');
}
