#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *Description:prints the last digit of a number
 *Return: Always zero (0)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is positive\n", n);
	}
	return (0);
}
