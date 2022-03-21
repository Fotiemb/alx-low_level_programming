#include <stdio.h>
#include "main.h"
/**
 *main - point of entry
 * _isupper -check if an argument if a uppercase letter
 *
 *
 * Return: either 1 for uppercase or 0 for any other character other than.
 */
int main(void)
{
	if (_isupper('A') == 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');

	if (_isupper('a') == 0)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');

	return (0);
}
