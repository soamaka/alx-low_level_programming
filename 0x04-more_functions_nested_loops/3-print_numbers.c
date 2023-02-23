#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * Return: The printed number
 */

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
		putchar('\n');
}
