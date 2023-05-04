#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: A pointer to the binary string
 *
 * Return: The unsigned decimal value of the binary string, or 0 if an
 * invalid character is encountered or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int len, base_two = 1;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			decimal += base_two;
	}

	return (decimal);
}
