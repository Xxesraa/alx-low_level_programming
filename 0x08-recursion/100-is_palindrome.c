#include "main.h"
/**
 * last_index - return the last index of a string null
 * @s: pointer to string
 * Return: int
*/

int is_palindrome(char *s);
int check(char *s, int st, int e, int m);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: string to check
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int e = last_index(s);

	return (check(s, 0, e - 1, e % 2));
}

/**
 * check - checker for the palindrome
 * @s: string
 * @st: int move from right to left
 * @e: int move from left to right
 * @m: int
 * Return: 0 or 1
*/
int check(char *s, int st, int e, int m)
{
	if ((st == e && m != 0) || (st == e + 1 && m == 0))
		return (1);
	else if (s[st] != s[e])
		return (0);
	else
		return (check(s, st + 1, e - 1, m));
}
