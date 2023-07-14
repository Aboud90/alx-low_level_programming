#include "main.h"

/**
* _calloc - allocates memory for an array, using malloc
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			c[i] = 0;
		return (c);
	}
	else
		return (NULL);
}
