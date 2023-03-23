#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0 && n != i)
		{
			n /= i;
		}
	}

	printf("%ld\n", n);

	return (0);
}
