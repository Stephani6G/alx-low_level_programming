#include "main.h"

/**
* _strchr - Locates a character in a string s
*
* @s: The string to check for char c
* @c: byte  to find
* Return: Pointer to @s or NULL
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
		{
		return (s);
		}
	}
	return (NULL);
}
