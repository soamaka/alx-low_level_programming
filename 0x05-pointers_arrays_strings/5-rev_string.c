#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}