#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index starting from 0 of the but you want to set
 *
 * Return: 1 if it worked; 0r -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
