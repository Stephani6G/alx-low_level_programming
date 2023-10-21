#include "main.h"
#include <stdio.h>

/**
 * pali -function to compare string
 * @i: counter to begin string
 * @len: length of the string
 * @s: String to evaluate
 * Return: 1 if a string is a palindrome and 0 if not
 */

int pali(int i, int len, char *s)
{
	if (i == len - 1)
	{
		return (1);
	}
	else if (s[i] != s[len - 1])
	{
		return (0);
	}
	else if (i < len - 1)
	{
		return (pali(i + 1, len - 1, s));
	}
	return (1);
}

/**
 * length - Function for calculate lenght of the string
 * @s: String to evaluate
 * Return: length of the string
 */
int length(char *s)
{
	if (*s != '\0')
	{
		return (1 + length(s + 1));
	}
	return (0);
}

/**
 * is_palindrome - Function to evaluate if An empty string
 * @s: String to evaluate if An empty string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len = length(s);

	return (pali(0, len, s));
}
