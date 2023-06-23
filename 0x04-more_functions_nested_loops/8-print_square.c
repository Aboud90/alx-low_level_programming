#include "main.h"
/**
 * print_square - Draws a square with '#' characters of given size.
 * @size: Length and width of square.
 *
 * Return: void
 */
void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
