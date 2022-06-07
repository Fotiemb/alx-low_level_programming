#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - check the code
 *
 * Return: Always return 0 (Success)
*/

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
