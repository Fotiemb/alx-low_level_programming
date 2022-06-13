#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap some letter
 * @a: first
 * @b:two
 * Return: void value
 */

void swap_int(int *a, int *b)
{
	int tp;

	tp = *a;
	*a = *b;
	*b = tp;
}
