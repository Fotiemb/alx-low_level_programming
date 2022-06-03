#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-program
 * lowercase
 *return 0
 */
int main(void)
{
	char a = 'a';

	while (a < 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
