#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_count++;
		}
	}

	words = (char **) malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; j < word_count; j++)
	{
		while (str[i] == ' ')
		{
			i++;
		}

		for (len = 0, k = i; str[k] != ' ' && k < len; k++)
		{
			len++;
		}

		words[j] = (char *) malloc((len + 1) * sizeof(char));

		if (words[j] == NULL)
		{
			for (j--; j >= 0; j--)
			{
				free(words[j]);
			}

			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++, i++)
		{
			words[j][k] = str[i];
		}

		words[j][k] = '\0';
	}

	words[j] = NULL;

	return (words);
}
