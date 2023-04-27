#include <stdio.h>

void __attribute__((constructor)) startup_func();

/**
 * startup_func - is executed before the main function
 */

void startup_func(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
