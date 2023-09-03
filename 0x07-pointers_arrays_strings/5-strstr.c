#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: strin
 * @needle: substring in haystack
 *
 * Return: pointer to beginning of substring NUL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;

		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
