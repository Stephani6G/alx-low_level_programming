#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * input_check - checks if all characters in a string
  * are digits
  * @str: passed in string argument
  * @narg: number of command line arguments
  * Return: 1 if all characters are digits and 0, if not.
  */

int input_check(char **str, int narg)
{
	int i, j, k, r;
	char n, ltr, err[] = "ERROR\n";

	if (narg != 3)
	{
		for (j = 0; j < 6; j++)
			_putchar(err[j]);
		return (0);
	}
	for (k = 1; k < 3; k++)
	{
		for (i = 0; *(str[k] + i) != '\0'; i++)
		{
			r = 0;
			n = *(str[k] + i);
			for (ltr = '0'; ltr <= '9'; ltr++)
			{
				if (ltr == n)
				{
					r = 1;
					break;
				}
			}
			if (r == 0)
			{
				for (j = 0; j < 6; j++)
					_putchar(err[j]);
				return (0);
			}
		}
	}
	return (1);
}

/**
  * place_value - creates an integer array block of a given length
  * and initialize all units to zero.
  * @size: the desired length of the created array
  * Return: pointer to the created array
  */

unsigned long int *place_value(unsigned int size)
{
	unsigned long int *arr;
	unsigned int i;

	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = 0;
	return (arr);
}

/**
  * str2num - converts string array of digit characters
  * to an integer array
  * @str: the passed-in string of digits
  * Return: pointer to the integer array
  */

unsigned long int *str2num(char *str)
{
	unsigned long int *num;
	int i, n, strL = 0;
	char ltr, c;

	for (i = 0; *(str + i) != '\0'; i++)
		strL++;
	num = place_value(strL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		n = 0;
		c = *(str + i);
		for (ltr = '0'; ltr <= '9'; ltr++)
		{
			if (c == ltr)
			{
				num[i] = n;
				break;
			}
			n++;
		}
	}
	return (num);
}

/**
  * multiply  - multiplies array of numbers
  * @N1: first integer array
  * @N2: second integer array
  * @L1: length of first array
  * @L2: length of second array
  * Return: pointer to the product array
  */

unsigned long int *multiply(unsigned long int *N1, unsigned long int *N2,
		unsigned int L1, unsigned int L2)
{
	int i, j;
	unsigned long int *prod;

	prod = place_value(L1 + L2);
	for (i = (L1 - 1); i >= 0; i--)
	{
		for (j = (L2 - 1); j >= 0; j--)
		{
			prod[i + j + 1] = prod[i + j + 1] + N1[i] * N2[j];
			if (prod[i + j + 1] > 9)
			{
				prod[i + j] = prod[i + j] + (prod[i + j + 1] / 10);
				prod[i + j + 1] = prod[i + j + 1] % 10;
			}
		}
	}
	return (prod);
}

/**
  * main - computes and print the product of numbers passed in
  * at command line
  * @argc: the number of command line arguments
  * @argv: the array of strings passed in as arguments
  * Return: 0 for success exit
  */

int main(int argc, char **argv)
{
	int i, nz, Len1 = 0, Len2 = 0;
	unsigned long int *N1, *N2, *N;

	if (input_check(argv, argc) == 0)
		exit(98);

	for (i = 0; *(argv[1] + i) != '\0'; i++)
		Len1++;
	for (i = 0; *(argv[2] + i) != '\0'; i++)
		Len2++;
	N1 = str2num(argv[1]);
	N2 = str2num(argv[2]);
	N = multiply(N1, N2, Len1, Len2);
	nz = 0;
	for (i = 0; i < (Len1 + Len2); i++)
	{
		if (N[i] != 0)
		{
			nz = 1;
			_putchar(N[i] + '0');
		}
		else
		{
			if ((nz == 1) || (i == (Len1 + Len2 - 1)))
				_putchar(N[i] + '0');
		}
	}
	_putchar('\n');
	free(N1);
	free(N2);
	free(N);
	return (0);
}
