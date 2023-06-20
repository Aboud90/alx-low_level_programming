#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return : void
 */
void print_alphabet_x10(void)
{
	char txt = 'a';

	int i = 0;

	while (i <= 9)
	{
		while (txt <= 'z')
		{
			_putchar(txt);

			txt++;

		}
		i++;
	}
}
