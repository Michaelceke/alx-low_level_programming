#include <stdio.h>

/**
 * main - ENtry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char charchar;
	int intint;
	long longer;
	long long longer_throat;
	float floater;

	printf("Size of a char: %lu byte(s)\n", sizeof(charchar));
	printf("Size of an int: %lu byte(s)\n", sizeof(intint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longer));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longer_throat));
	printf("Size of a float: %lu byte(s)\n", sizeof(floater));

	return (0);
}
