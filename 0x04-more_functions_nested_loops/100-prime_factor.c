#include "main.h"
#include <stdio.h>

/**
* main - find and print largest prime factor of a num followed by a new line
*
* Return: Always 0
*/
int main(void)
{
	long int a;
	long int num;

	a = 2;
	num = 612852475143;
	while (a < (num / 2))
	{
		if ((num % a) == 0)
		{
			num = num / a;
			a = 2;
		}
		else
		{
			a++;
		}
	}
	printf("%ld\n", num);
	return (0);
}
