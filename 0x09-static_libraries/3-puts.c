#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: constant character
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

