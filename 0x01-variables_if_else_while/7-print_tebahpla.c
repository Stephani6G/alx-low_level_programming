#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Description: using the putchar function
 * program prints lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
char a;
for (a = 'z'; a >= 'a'; a--)
{
	putchar(a);
}

putchar('\n');
return (0);
}
