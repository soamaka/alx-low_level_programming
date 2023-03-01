#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 * @n: maximum no of bytes to copy from source
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[dest_len + 1] = src[1];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
