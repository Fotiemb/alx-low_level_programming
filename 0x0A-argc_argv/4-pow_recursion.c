#include "main.h"
#include<stdio.h>
/**
 * _pow_recursion - give an integer
 * @x: first parametre
 * @y:second parammetre
 * Return: Always return a number
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
