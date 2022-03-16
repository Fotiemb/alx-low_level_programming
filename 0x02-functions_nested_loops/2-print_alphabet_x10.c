#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main-print 10 times the alphabet
* Return: Always return 0 (success)
*/

void print_alphabet_x10(void)
{
	int i = 0;

	char ch;

	while (i < 10)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		i++;
	}
}
