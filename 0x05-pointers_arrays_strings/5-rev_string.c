#include "main.h"

/**
 * rev_string -  reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/
void rev_string(char *s)
{
	char re = s[0];
	int coun = 0;
	int i;

	while (s[coun] != '\0')
		coun++;
	for (i = 0; i < coun; i++)
	{
		coun--;
		re = s[i];
		s[i] = s[coun];
		s[coun] = re;
	}
}
