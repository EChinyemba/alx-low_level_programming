#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints numbers in base 16
 * Return: 0
 */
int main(void)
{
	int x;
	char alp;

	for (x = 0; x <= 9; x++)

	for (alp = 'a'; alp <= 'f'; alp++)

		putchar(x + '0');
		putchar(alp);

		putchar('\n');

	return (0);

}
