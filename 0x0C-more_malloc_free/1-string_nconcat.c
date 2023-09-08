#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat -  concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second  string
 * @n: number of bytes
 *
 * Return: pointer to space in memory containing concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, se, sr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (se = 0; s1[se] != '\0'; se)
		;
	for (sr = 0; s2[sr] != '\0'; sr)
		;
	str = malloc(se + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}

