#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - print every other character
 * @str: the char to  check
 */

void puts2(char *str)
{
	int i = 0;

	while (i < strlen(str))
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
