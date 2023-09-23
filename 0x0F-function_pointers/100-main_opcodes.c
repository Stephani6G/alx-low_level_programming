#include <stdio.h>
#include <stdlib.h>

/**
  * print_address - prints opcodes of main function
  * @str: address passed-in
  * @n: number of bytes to be printed
  */

void print_address(char *str, int n)
{
	int i = 0;

	char ch;

	while (i < n)
	{
		ch  = *(str + i);

		printf("%.2hhx", ch);
		if (i < (n - 1))
			printf(" ");
		i++;
	}
	printf("\n");
}

/**
  * main - prints its opcodes
  * @argc: number of arguments to main
  * @argv: string array of arguments to main
  * Return: 0 always to terminate program
  */

int main(int argc, char *argv[])
{
	int nbytes;
	char *s;

	if (argc != 2)
	{
		printf("Error\n");

		exit(1);

	}
	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char *)&main;

	print_address(s, nbytes);

	return (0);
}
