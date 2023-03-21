#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int a, b, c, sum;

	a = 1;
	b = 2;
	sum = 2;
	for (i = 0; i < 30; i++)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	}
	printf("%ld\n", sum);

	return (0);
}
