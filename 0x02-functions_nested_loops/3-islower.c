#include "main.h"
/**
 * _islower - checks lowercase
 * @c : c is ASCII
 *
 * Return : 1 if is lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);

	else
		return(0);
}

