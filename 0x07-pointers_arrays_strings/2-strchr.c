#include "main.h"
/**
 * _strchr - Locates a character in a string.
 * @s: source string
 * @c: tested char
 *
 * Return: new string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
