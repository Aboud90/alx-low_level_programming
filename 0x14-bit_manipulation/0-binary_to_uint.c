#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		ui = ui << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			ui = ui | 1;
		b++;
	}
	return (ui);
}
