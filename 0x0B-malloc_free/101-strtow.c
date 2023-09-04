#include "main.h"

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 *
 * Return: int of number of words
*/

int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;

	}
	n++;
	return (n);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of string
*/
char **strtow(char *str)
{
	int i, j, k, l, n = 0, we = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[we] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[we] == NULL)
			{
				for (k = 0; k < we; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[we][l] = str[i + l];
			w[we][l] = '\0';
			we++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}

