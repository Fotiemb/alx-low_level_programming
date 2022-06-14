#include <string.h>
#include "main.h"

/**
 * puts2 - print every other character
 * @str: the char to  check
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
