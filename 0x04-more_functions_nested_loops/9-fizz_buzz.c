#include <stdio.h>
#include "main.h"

/**
* main - program that print from 1 - 100
* Prints Fizz for multiples of 3 and Buzz for multiples of 5
* for multiples og both print FizzBuzz
* Return: Alays 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
