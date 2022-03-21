#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - translate all integer to 98
 * @n: an integer
 * Return: void
 */
void reset_to_98(int *n)
{
	/*here is the translation*/
	int *p = &*n;
	*p = 98;

}
