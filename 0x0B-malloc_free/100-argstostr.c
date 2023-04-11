#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments into a single string
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: a pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return NULL;
	}

	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len] != '\0'; len++)
		{
			total_len++;
		}

		total_len++;
	}

	str = (char *) malloc((total_len + 1) * sizeof(char));

	if (str == NULL)
	{
		return NULL;
	}

	for (i = 0, j = 0; i < ac; i++)
	{
		for (len = 0; av[i][len] != '\0'; len++, j++)
		{
			str[j] = av[i][len];
		}

		str[j] = '\n';
		j++;
	}

	str[j] = '\0';

	return str;
}
