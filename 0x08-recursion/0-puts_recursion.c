#include "main.h"
/*
 *_puts_recursion -  prints a string, followed by a new line
 *@s: string to test
 *Return: 1 if right -1 if fault
 *
 */
void _puts_recursion(char *s)
{
	char *s
		if (*s == 0)
		{
			_putchar("\n");
			return (0);
		}
	_putchar(*s);
	_puts_recursion(s + 1);
}
