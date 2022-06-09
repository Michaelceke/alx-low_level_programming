#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @c: int type number
 * Return: returns last digit of number input
 */

int print_last_digit(int c)
{
	int last;

	if (c < 0)
	{
		last = -1 * (c % 10);

		_putchar(last + '0');

		return (last);
	}
	else
	{
		last = c % 10;

		_putchar(last + '0');

		return (last);
	}
}
