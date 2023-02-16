#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %ld byte\n", sizeof(a));
printf("Size of an int: %ld byte\n", sizeof(b));
printf("Size of a long int: %ld byte\n", sizeof(c));
printf("Size of a long long int: %ld byte \n", sizeof(d));
printf("Size of a float: %ld byte \n", sizeof(f));
return (0);
}
