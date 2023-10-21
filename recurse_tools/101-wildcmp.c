#include "main.h"
#include <stdio.h>

/**
* wildcmp - compares two strings s1 and s2  with a * asterisk in s2
* @s1: string one
* @s2: string two
* Return:1 if the strings can be considered identical
*/

int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (1);

	else if (s1 == NULL || s2 == NULL)
		return (0);

	if (*s1 == '\0')
	{
		if (*s2 == '*' && *(s2 + 1) == '\0')
			return (1);

		if (*s1 == *s2)
			return (1);

		else
			return (0);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		if (*s1 == *(s2 + 1))
		{
			if ((wildcmp(s1, s2 + 1)) == 1)
				return (1);

		}
		return (wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
