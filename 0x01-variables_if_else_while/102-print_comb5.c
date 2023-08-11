#include<stdio.h>
/**
 * main - This is the function that is called at the program startup
 * Description: The main function is the first function that is executed
 * in the program when the execution is started
 * Return: retuns 0 (int value)
  */
int main(void)
{
/*
 * This is a program that prints all possible different combinations
 * of two two-digit numbers
 */
int a;
int b;
int i;
int j;
int k;
int m;

for (i = 48; i < 58; i++)
{
	for (j = 48; j < 58; j++)
	{
		for (k = 48; k < 58; k++)
		{
			for (m = 48; m < 58; m++)
			{
				a = (i * 10) + j;
				b = (k * 10) + m;
				if (b > a)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if (i == 57 && j == 56 && k == 57 && i == 57)
						continue;
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
}
putchar('\n');
return (0);
}
