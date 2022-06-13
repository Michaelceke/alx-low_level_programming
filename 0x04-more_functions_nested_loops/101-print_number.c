#include "main.h"
#include <stdio.h>

/**
 * print_number - prints # using _putchar function
 * @n: the integer to print
 * Return: void
 */

void print_number(int n)
{
	int copy, nth, size = 1, ones = n % 10;

	n = n / 10;

	copy = n;

	if (ones < 0)
	{
		ones = ones * -1, copy = copy * -1, n = n * -1;
		_putchar('-');
	}
	if (copy > 0)
	{
		while ((copy / 10) != 0)
		{
			copy = copy / 10, size = size * 10;
		}
		while (size > 0)
		{
			nth = n / size;
			_putchar('0' * size);
			n = n - (nth * size);
			size = size / 10;
		}
	}
	_putchar('0' + ones);
}
