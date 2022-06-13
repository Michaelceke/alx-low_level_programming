#include "main.h"

/**
 * print_line - Write a function thhat draws a straight line in the terminal.
 * @n: integer amount of _
 */

void print_line(int n)
{
	char c;

	for (c = 1; c < n + 1; c++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
