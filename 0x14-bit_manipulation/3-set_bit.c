#include "main.h"
#include <stdio.h>
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: pointer to the bit
 *
 * Return: 1 if successful; -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
