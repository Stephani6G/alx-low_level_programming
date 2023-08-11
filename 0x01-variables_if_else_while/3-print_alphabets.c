#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * Description: using the putchar function
 * program that prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
