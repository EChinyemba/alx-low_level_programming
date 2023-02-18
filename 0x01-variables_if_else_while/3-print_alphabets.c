#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the alphabet in both lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; upper = 'A'; upper <= 'Z'; lower++, upper++)
		putchar (lower);

		putchar (upper);

		putchar ('\n')

	return (0);
}
