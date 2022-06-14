#include "main.h"
/**
*print_array - give element of table
*@a: table digit
*@n: size
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		_putchar(',');
		_putchar(' ');
	}
}
