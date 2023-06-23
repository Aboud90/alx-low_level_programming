#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print '_'
 *
 * Return: void
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
