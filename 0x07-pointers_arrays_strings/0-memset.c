#include "main.h"

/**
 * _memset - Function that fills memory with constant byte
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
