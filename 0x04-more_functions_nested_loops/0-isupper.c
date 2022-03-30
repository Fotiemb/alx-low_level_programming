#include <stdio.h>
#include "main.h"
/**
*_isupper - give here is my _isupper function
* @c: a charactere
*Return: either 1 for uppercase or 0 for any other character other than.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		if (c >= 97 && c <= 122)
		{
			return (0);
		}
	}
	}
