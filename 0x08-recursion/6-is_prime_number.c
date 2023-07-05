#include "main.h"

/**
 * is_prime - prime function
 * @n: integer
 * @m: integer
 *
 * Return: 1 is right -1 if wrong
 */
int is_prime(int n, int m)
{
	if (n == m)
		return (1);
	else if (n % m == 0)
		return (0);
	return (is_prime(n, m + 1));
}
/**
 * is_prime_number - prime function
 * @n: Number Integer
 * Return: 1 if right -1 if wrong
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
