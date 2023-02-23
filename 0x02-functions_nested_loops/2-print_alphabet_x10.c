#include "main.h"

/**
 * main - Prints alphabet 10 times in lowercase
 * Return: nothing
 */
void print_alphabet_×10(void)
{
	char alp;
	int i;

	for (i = 0; i <= 10; i++)
	{
	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);

		_putchar('\n');
	}

}
