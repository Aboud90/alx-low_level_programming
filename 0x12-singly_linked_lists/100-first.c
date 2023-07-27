#include <stdio.h>

void __attribute__((constructor)) h(void);

/**
 * h - Prints a string before the
 *        main function.
 */
void h(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
