#include <stdio.h>
#include "main.h"

/**
* main - replaces multples of 3 with fizz,
* multiples of 5 with buzz, and
* multiples of both 3 and 5 with fizzbuzz
* Return: fizz , buzz or fizzbuzz
*/

int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (num % 5 == 0)
			{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}

		else
		{
			printf("%d ", num);
		}
	}
	putchar('\n');
	return (0);
}
