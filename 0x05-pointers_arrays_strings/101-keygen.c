#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - generate  password for crackme
*
*Return: Always 0
*/

int main(void)
{
	char c[100];
		int x;
		int y = 0;
		int z = 0;

		srand(time(0));
		while (y < 2645)
		{
			x = rand() % 122;
			if (x > 32)
			{
				c[z++] = x;
				y += x;
			}
		}
		c[z++] = (2772 - y);
		c[z] = '\0';
		printf("%s", c);

		return (0);
}
