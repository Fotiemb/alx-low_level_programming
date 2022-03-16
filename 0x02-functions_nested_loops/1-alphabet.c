#include <stdio.h>
#include "main.h"

/*main - print alphabet function
 * Return: Always return 0 (Success)
 */

void print_alphabet(void)
{
        char ch;
        for(ch = 'a' ; ch <= 'z' ; ch++)
        {
                 putchar(ch);
        }
}
