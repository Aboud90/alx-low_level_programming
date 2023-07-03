#include "main.h"
/**
 * _strspn - Locates a character in a string.
 * @s: source string
 * @a: looking string
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *a)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(a + i); i++)
		{
			if (*(s + j) == *(a + i))
				break;
		}
	if (*(a + i) == '\0')
		break;
	}
	return (j);
}
