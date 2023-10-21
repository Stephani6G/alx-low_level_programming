#include "main.h"
/**
* _strchr - Locates a character in a string s
*
* @s: The string to check for char c
* @c: byte  to find
* Return: Pointer to @s or 0
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (0);
}
