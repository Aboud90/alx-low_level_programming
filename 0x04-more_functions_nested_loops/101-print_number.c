s#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: Input integer.
 *
 * Return: No return.
 */
void print_number(int n)
{
	unsigned int m;
	unsigned int d;
	unsigned int count;

	if (n < 0)

	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		_putchar(((m / count) % 10) + '0');
		count /= 10;
	}
}
