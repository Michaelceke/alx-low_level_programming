#include <stdio.h>

/**
 * main - prints on display hexadecimal base 0-9-f using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num1_9 = '0';
	char letter_a-f = 'a';

	while (num1_9 <= '9')
	{
		putchar(num1_9);
		num1_9++;
	}

	while (letter_a-f <= 'f')
	{
		putchar(letter_a-f);
		letter_a-f++;
	}

	putchar('\n');

	return (0);
}
