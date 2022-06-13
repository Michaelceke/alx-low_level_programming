#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 * from 0 - 9 excluding 2 and 4 followed by a new line
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
