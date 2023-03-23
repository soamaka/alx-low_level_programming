#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number of parameters passed to function
 * @...: a vaiable number of parameters to calculate the sum of
 *
 * Return: if n -- 0 - 0.
 * Otherwise - the sum of a ll parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
