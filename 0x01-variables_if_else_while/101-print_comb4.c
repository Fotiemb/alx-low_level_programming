#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = '1';
	c = '2';

	while (a < '9')
	{
		while (b < '9')
		{
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				putchar(',');
				putchar(' ');
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
	return (0);
}
