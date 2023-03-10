#include <stdio.h>

/**
 * main - prints the program name, followed by new line
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
