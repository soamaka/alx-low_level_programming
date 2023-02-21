#include <stdio.h>
/**main - a program that prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count = 3;

	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 50)
	{
		/*Let's check if we are at the end of the list, if we are close with a new line */
		if (count == 50)
		{
			printf("%lu \n", next);
		}
		else  /*if we are not at the end of the list, add a comma after the number */
		{
			printf("%lu, ", next);
		}

		/*Reset the variables to get the next number*/
		first = second;
		second = next;

		/* after resetting the variables, you need to find the next number */
		next = first + second;
		count++;
	}

	return (0);
}
