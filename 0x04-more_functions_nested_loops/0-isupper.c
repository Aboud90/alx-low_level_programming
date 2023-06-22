#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if a letter is upprcase
 * @c: c is ASCII
 * Return:return 1 if it is uppercase
 * 0 if not
 */
int _isupper(int c)
{
	char c;
	if( c >= 'A' && c <= 'Z' )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
