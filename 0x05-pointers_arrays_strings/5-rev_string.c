#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - print reverses string
 * @s: char to check
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);

	}
}
