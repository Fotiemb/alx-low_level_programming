#include <stdlib.h>
#include <stdio.h>

/**
 * main-print alphabet
 * Return: Always return 0 (success) 
 */

void print_alphabet(void);

int main(void)
{
      
		print_alphabet();
        return 0;
}

void print_alphabet(void)
{
	 char ch;
   for(ch = 'a' ; ch <= 'z' ; ch++)
   {
      putchar(ch);
   }
}
