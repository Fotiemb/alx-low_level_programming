#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main-print _putchar
 * Return: Always return 0 (success)
 */

int main(void)
{
	char c[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
