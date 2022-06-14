#include <string.h>
#include "main.h"

/**
 * puts2 - print every other character
 * @str: the char to  check
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}
