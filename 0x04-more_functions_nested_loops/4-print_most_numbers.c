#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers 0 to 9 except 2,4
 *
 * Return: 0 - 9 except 2,4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
