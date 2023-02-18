#include <stdio.h>
/**
 * main - to prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int a;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
