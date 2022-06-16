#include "main.h"
#include <string.h>
/**
 * _strcat - this is a function strcat
 * @dest: first param
 * @src: second param
 * Return: a string
 */

char *_strcat(char *dest, char *src);
{
	char *tmp = dest;

	for ( ; *dest; dest++);
	for ( ; *dest = *src; dest++, src++);
	*dest = '\0';

	return (tmp);
}
