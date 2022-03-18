#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

/*here we will have an infinite loop because there is no stopping condition*/
	while (i < 10)
	{
		putchar(i);
	}
/*this line will not be executed*/

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
