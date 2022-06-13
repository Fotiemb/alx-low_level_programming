#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_rev - print inverse string
 * @s: the char to check
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		putchar(s[i]);
}
