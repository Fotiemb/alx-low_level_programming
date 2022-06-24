#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * factorial - give a factorial of a number
 * @n: is an integer
 * Return: always return the factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
