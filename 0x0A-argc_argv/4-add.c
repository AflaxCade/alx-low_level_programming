#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{

	int sum = 0;
	int i = 1;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}

	while (i < argc)
	{
		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return 1;
		}
		sum += num;
		i++;
	}

	printf("%d\n", sum);
	return 0;
}
