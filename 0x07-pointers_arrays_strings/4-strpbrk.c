#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: source string
 * @a: searching string
 *
 * Return: new string.
 */
char *_strpbrk(char *s, char *a)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(a + j); j++)
		{
			if (*(s + i) == *(a + j))
			{
				break;
			}
		}
		if (*(a + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
