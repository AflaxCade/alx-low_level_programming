#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m1 = atoi(argv[1]);
	m2 = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
