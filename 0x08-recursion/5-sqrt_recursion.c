#include "main.h"

/**
 * sqrt2 - _sqrt_recursion
 * @n: integer
 * @m: integer
 *
 * Return: 1 if right -1 if wrong
 */
int sqrt2(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	return (sqrt2(n, m + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n:Integer
 * Return: 1 if rirht -1 if wrong
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
