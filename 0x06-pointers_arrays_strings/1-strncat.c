#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 * @n: maximum no of bytes to copy from source
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;

	dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
