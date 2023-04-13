#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to use from s2
 *
 * Return: pointer to newly created string, else NULL if failure occurs
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	newstr = malloc((len1 + n + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		newstr[i] = s1[i];

	for (j = 0; j < n; j++)
		newstr[i + j] = s2[j];

	newstr[i + j] = '\0';

	return (newstr);
}
