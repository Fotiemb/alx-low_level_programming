#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include "main.h"

/**
 * _islower - print 1 or 0
 * @c:parametre
 * Return: Always return 0 (success)
 */
int _islower(int c)
{
	char ch[26 + 1] = {'c', '\0'};

	if (islower(ch[c]))
	{
		rint("la lettre est: %c\n", ch[c]);
		return (1);
	}
	else
	{
		printf("0\n");
		return (0);
	}

}
