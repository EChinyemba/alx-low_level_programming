#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints numbers in base 16
 * Return: 0
 */
int main
{
	int x;
	char alp;

	for(x = 0; x <= 9; x++)

		putchar(x + '0');

	for(alp = 'a'; alp <= 'f'; alp++)

		putchar(alp);

		putchar('\n');

	return (0);
}
