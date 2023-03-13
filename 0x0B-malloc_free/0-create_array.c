#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,and initializes it with a spec char
 * @size: size of array to be created
 * @c: character to initialize the array with
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0) /*check if size is 0*/
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL) /*check if memory allocation was successful*/
	{
		return (NULL);
	}
	
	for (i = 0; i < size; size++)
	{
		array[i] = c;
	}
	return (array);
}
