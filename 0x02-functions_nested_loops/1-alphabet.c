#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
