#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _puts - give a string followed by a new line
* @str: paramettre
*/

void _puts(char *str)
{
	puts(&*str);
}
