#include "main.h"

/**
*string_nconcat - Concatenates two strings
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c; /*concatenate pointer*/
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	c = malloc(sizeof(char) * (l + 1));

	if (c == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		c[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		c[l++] = s2[i];

	c[l] = '\0';

	return (c);
}
