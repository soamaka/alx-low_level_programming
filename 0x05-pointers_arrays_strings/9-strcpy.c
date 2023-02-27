#include "main.h"
#include <stdio.h>
/**
 * _strcpy - a function that copies the string
 * @dest: destination value
 * @src: source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
