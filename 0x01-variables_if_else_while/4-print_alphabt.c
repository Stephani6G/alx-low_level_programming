#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 *
 * Description: using the putchar function
 * program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	if (ch == 'q')
		continue;

	else if (ch == 'e')
		continue;

	putchar(ch);
}

putchar('\n');
return (0);
}
