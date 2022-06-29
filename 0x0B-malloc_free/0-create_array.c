#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */

char *create_array(unsigned int size, char c)
{
	char *sl;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	sl = malloc((size) * sizeof(char));
	if (sl == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < size)
	{
		sl[j] = c;
		j++;
	}
	sl[j] = '\0';
	return (sl);
}
