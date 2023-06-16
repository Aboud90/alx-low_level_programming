/*
 * File: 2-print_alphabet.c
 * Auth: Aboud90
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
		putchar(le);

	putchar('\n');

	return (0);
}
