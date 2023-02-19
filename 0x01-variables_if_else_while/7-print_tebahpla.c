#include <stdio.h>
#include <stdlib.h>

/**
 * msin - A program that prints the alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)

		putchar(alp);

		putchar('\n');

	return (0);
}
