#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include "main.h"

/**
 * _islower - print 1 or 0
 * @c:the character to check
 * Return: Always return 0 (success)
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
