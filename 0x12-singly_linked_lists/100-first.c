#include <stdio.h>
#include "lists.h"

void do_before_main(void) __attribute__((constructor));

/**
* do_before_main - calls and executes this before main function is executed
*/

void do_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
