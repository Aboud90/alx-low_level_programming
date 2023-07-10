#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers.
 *@width: rows of array
 *@height: columns of array
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int i;
	int j;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	gridout = (int **)malloc(height * sizeof(int *));
	if (gridout == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(gridout + i) = (int *)malloc(width * sizeof(int));
		if (*(gridout + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = gridout[i];
				free(p);
			}
			free(gridout);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			gridout[l][j] = 0;
		}
	}
	return (gridout);
}
