#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits you would
 * need to t to get from one number to another.
 * @n: Number 1.
 * @m: Number 2.
 * Return: Number of t in the Input numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int t = 0, i, j;

	while (!(n == 0 && m == 0))
	{
		i = n & 1;
		j = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (i != j)
			t += 1;
	}
	return (t);
}
