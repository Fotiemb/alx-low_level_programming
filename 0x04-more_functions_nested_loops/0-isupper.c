#include <stdio.h>
#include "main.h"
/**
 * _isupper -check if an argument if a uppercase letter
 * @c: variable check
 *
 * Return: either 1 for uppercase or 0 for any other character other than.
 */
int _isupper(int c)
{
	int ret;

	if (c >= 65 && c <= 90)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}

	return (ret);
}
