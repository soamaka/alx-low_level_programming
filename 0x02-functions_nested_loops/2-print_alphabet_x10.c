#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabe
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n, b;

	b = 0;

	while (b < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		b++;
		_putchar('\n');
	}
}
