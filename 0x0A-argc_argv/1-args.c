#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: argc param
 * @argv: an array of a command listed
 * Return: 0 for sucess
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argc - 1);

	return (0);
}

