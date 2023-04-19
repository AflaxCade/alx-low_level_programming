#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 if incorrect number of arguments, 2 if negative num_bytes
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *opcode = (unsigned char *) main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(opcode + i));
	}

	printf("\n");

	return (0);
}
