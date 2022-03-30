#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - check our funtion 
 * positive_or_negative: verify our number if it's positive or negative
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	int n = i;
	
        
		if (n > 0)
		{
       		 printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
       		 printf("%d is zero\n", n);
		}
		else if (n < 0)
		{
        	printf("%d is negative\n", n);
		}
}
