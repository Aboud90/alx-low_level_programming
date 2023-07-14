#include "main.h"

/**
* array_range - creates an array of integers
* @min: min
* @max: max
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *c;
	int i, j = 0;

	if (min > max)
		return (NULL);
	c = malloc(sizeof(*c) * ((max - min) + 1));
	if (c != NULL)
	{
		for (i = min; i <= max; i++)
		{
			c[j] = i;
			j++;
		}
		return (c);
	}
	else
		return (NULL);

}
