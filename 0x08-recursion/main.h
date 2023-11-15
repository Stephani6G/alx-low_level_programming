#ifndef MAIN_H
#define MAIN_H

/*putchar*/
int _putchar(char c);
/*Write a function that prints a string, followed by a new line*/
void _puts_recursion(char *s);

/*function that prints a string in reverse*/
void _print_rev_recursion(char *s);

/* function that returns the length of a string*/
int _strlen_recursion(char *s);

/*unction that returns the factorial of a given number*/
int factorial(int n);

/*function that returns the value of x raised to the power of y*/
int _pow_recursion(int x, int y);

/* function that returns the natural square root of a number*/
int _sqrt_recursion(int n);

/* function that returns 1 if the input integer is a prime number*/
int is_prime_number(int n);

/*unction that returns 1 if a string is a palindrome or not*/
int is_palindrome(char *s);

/*nction that compares two string if identical*/
int wildcmp(char *s1, char *s2);

#endif
