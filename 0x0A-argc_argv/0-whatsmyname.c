#include <stdio.h>

/**
 * main - prints the program name, followed by new line
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
		for (i = 0; i < argc; i++)
			printf("%s", argv[i]);
	printf("\n");
	return (0);
}
