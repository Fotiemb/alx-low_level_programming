#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - give the size of char
 * @s: parameter
 * Return: the result len
 */
int _strlen(char *s)
{
	int len;

	len = strlen(&*s);

	return (len);
}
