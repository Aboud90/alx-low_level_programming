#include "main.h"
/**
 * _isalpha - checks if it is a letter or not
 * @c: is an ASCII
 *
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
