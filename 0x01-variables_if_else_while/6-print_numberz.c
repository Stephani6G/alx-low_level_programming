#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Description: using the putchar function
 * this program prints single digit numbe
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	putchar('\n');
	return (0);
}
