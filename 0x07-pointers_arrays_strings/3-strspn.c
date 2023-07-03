#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring.
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
