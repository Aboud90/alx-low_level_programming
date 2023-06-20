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

	for (i = 0; i <= 9; i++)
	{
		while(txt <= 'z')
		{
			_putchar(txt);

			txt++;
		}
		_putchar('\n');
	}
}
