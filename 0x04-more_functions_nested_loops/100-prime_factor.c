#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long largest_factor = 0;
	
	while (num > 1)
	
	{
		if (num % factor == 0)
		{
			num /= factor;
			if (factor > largest_factor)
			{
				largest_factor = factor;
			}
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", largest_factor);

	return (0);
}
