#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times using
 * only _putchar
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
	}
}
