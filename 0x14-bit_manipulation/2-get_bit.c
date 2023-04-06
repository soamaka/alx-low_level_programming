#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @index: is the index starting from 0 of the bit you want to get
 * @n: the bit
 *
 * Return: the value of the bit at index; or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
