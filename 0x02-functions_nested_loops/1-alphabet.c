#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always return 0 (Success)
*/
void print_alphabet(void)
{
	int letter;

	letter = 'a';

	while (letter <= 'z')
	{
		fputchar(letter);
		letter++;
	}
}
