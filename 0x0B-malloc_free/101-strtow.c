#include "main.h"
#include <stdlib.h>

void tokenize(char **word_array, char *input_str);
void split(char **word_array, char *input_str, int start, int end, int index);

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: An array of strings (words), with the last element being NULL.
 */
char **strtow(char *str)
{
	int i, found, length;
	char **word_array;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = found = length = 0;
	while (str[i])
	{
		if (found == 0 && str[i] != ' ')
			found = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			found = 0;
			length++;
		}
		i++;
	}

	length += found == 1 ? 1 : 0;
	if (length == 0)
		return (NULL);

	word_array = (char **)malloc(sizeof(char *) * (length + 1));
	if (word_array == NULL)
		return (NULL);

	tokenize(word_array, str);
	word_array[length] = NULL;
	return (word_array);
}

/**
 * tokenize - Tokenizes the input string and stores words in an array.
 * @word_array: The array to store the words.
 * @input_str: The input string.
 */
void tokenize(char **word_array, char *input_str)
{
	int i, j, start, found;

	i = j = found = 0;
	while (input_str[i])
	{
		if (found == 0 && input_str[i] != ' ')
		{
			start = i;
			found = 1;
		}

		if (i > 0 && input_str[i] == ' ' && input_str[i - 1] != ' ')
		{
			split(word_array, input_str, start, i, j);
			j++;
			found = 0;
		}
		i++;
	}

	if (found == 1)
		split(word_array, input_str, start, i, j);
}

/**
 * split - Splits a word and stores it in the array.
 * @word_array: The array to store the words.
 * @input_str: The input string.
 * @start: The starting index of the word.
 * @end: The ending index of the word.
 * @index: The index in the array.
 */
void split(char **word_array, char *input_str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	word_array[index] = (char *)malloc(sizeof(char) * (i + 1);

	for (j = 0; start < end; start++, j++)
		word_array[index][j] = input_str[start];
	word_array[index][j] = '\0';
}
