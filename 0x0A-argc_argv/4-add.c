#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		while (*num)
		{
			if (!isdigit(*num))
			{
				printf("Error\n");
				return (1);
			}
			num++;
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
