#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the alphabet in both lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char low;
	char up;

	for(low = 'a'; low <= 'z'; low++)
		putchar(low);

	for(up = 'A'; up <= 'Z'; up++)
		putchar(up);

		putchar('\n');

	return (0);
}
