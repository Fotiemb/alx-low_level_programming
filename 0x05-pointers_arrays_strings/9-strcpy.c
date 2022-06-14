#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*_strcpy - function that copies the string pointed
*@dest: first varible
*@src: second variable
 Return: On success dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
