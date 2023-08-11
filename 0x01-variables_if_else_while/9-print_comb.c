#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return:0 successs
 */
int main(void)

{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
