#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints single digits with commas and spaces
 * Return: 0
 */
int main(void)
{
int x = 0;

while (x <= 9)
{	putchar(x + '0');
		if (x == 9)
			break;

	putchar(',');

	putchar(' ');
	x++;
}
	putchar('\n');

return (0);
}
