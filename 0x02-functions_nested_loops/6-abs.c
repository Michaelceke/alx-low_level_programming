#include "main.h"
/**
 *_abs - Return the absolute value of an integer parameter
 * @n: int type number
 * Return: Absolute value of n
 */

int _abs(int n)
{
	if (n > 0 || n ==0)
	{
		return (n);
	}
	else
		return (-1 * n);
}
