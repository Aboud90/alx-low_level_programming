#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
