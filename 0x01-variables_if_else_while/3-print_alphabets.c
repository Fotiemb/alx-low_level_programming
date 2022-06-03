#include <stdlib.h>
#include <stdio.h>
/**
 * main-program
 * lowercase and uppercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char i;

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	for (i = 'A'; i <= 'Z'; ++i)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
