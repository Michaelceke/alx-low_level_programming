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
	float floater;
	long long longer_throat;

	printf("size of a char is %d byte(s)\n", sizeof(charchar));
	printf("Size of an int: %d byte(s)\n", sizeof(intint));
	printf("Size of a long int: %d byte(s)\n", sizeof(longer));
	printf("Size of a long long: %d byte(s)\n", sizeof(longer_throat));
	printf("Size of a float: %d byte(s)\n", sizeof(floater))

	return (0);
}
