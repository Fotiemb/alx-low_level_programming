#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-program
 *lowercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
