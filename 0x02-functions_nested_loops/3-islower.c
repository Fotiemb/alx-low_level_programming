#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main-print _putchar
 * Return: Always return 0 (success) 
 */

int _islower(int c);

int main(void)
{
	int n = 0;
      
      _islower(n);
		
        return 0;
}

int _islower(int c)
{
	 char ch[26 + 1] = {'c','\0'};

	 if (islower(ch[c]))
	 {
	 	printf("la lettre est: %c\n",ch[c]);
	 	return 1;
	 }
	 else
	 {
	 	printf("0\n");
	 	return 0;
	 }

}
