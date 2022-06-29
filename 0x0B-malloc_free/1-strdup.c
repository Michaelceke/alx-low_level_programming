#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int j;
	int m;

	if (str == NULL)
		return (NULL);
	for (m = 0; str[m] != '\0'; m++)
				;
	strnew = (char *)malloc(m + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (j = 0; str[j] != '\0'; j++)
			strnew[j] = str[j];
	} else
	{
		return (NULL);
	}
	strnew[j] = '\0';
	return (strnew);
}
