#include <stdio.h>

/**
 * main - prints on display hexadecimal base 0-9-f using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1_9 = '0';
	char lettera_f = 'a';

	while (num1_9 <= '9')
	{
		putchar(num1_9);
		num1_9++;
	}

	while (lettera_f <= 'f')
	{
		putchar(lettera_f);
		lettera_f++;
	}

	putchar('\n');

	return (0);
}
