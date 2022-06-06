#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}
	putchar('\n');

	return (0);
}
