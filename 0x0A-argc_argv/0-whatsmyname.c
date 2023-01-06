#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: This is the argument count 
 * @argv: This is the argument vector
 *
 * Return: This return to 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
