#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: the number
 * @m: the number to flip n to
 *
 * Return: the number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_number = n ^ m;
	unsigned int result = 0;

	while (xor_number > 0)
	{
		result += (xor_number & 1);
		xor_number >>= 1;
	}
	return (result);
}
