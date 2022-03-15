#include <stdlib.h>
#include <stdio.h>

/**
 * main-print 10 times the alphabet
 * Return: Always return 0 (success) 
 */

void print_alphabet_x10(void);

int main(void)
{
      int n = 0;

      while (n < 10)
      {
      	print_alphabet_x10();
      	n++;
      }
		
        return 0;
}

void print_alphabet_x10(void)
{
	 char ch;
   for (ch = 'a' ; ch <= 'z' ; ch++)
   {
      putchar(ch);
   }

   putchar('\n');
}
