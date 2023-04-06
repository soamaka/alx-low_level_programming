#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the coverted number; or 0 if b is null and there is one more chars
 * in the string b that is not 0 0r 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			number <<= 1;
			if (b[i] == '1')
				number += 1;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
