#include <stdio.h>

/**
 * main - print lowercase and uppercase a-zA-Z using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	return (0);
}
