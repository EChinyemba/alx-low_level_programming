#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the alphabet in both lowercase and uppercase
 * Return: 0
 */
int main(void)
{
char lw;
char up;

for (lw = 'a'; lw <= 'z'; lw++)
{
	putchar(lw);
}

for (up = 'A'; up <= 'Z'; up++)
{
	putchar(up);
}

	putchar('\n');;

return (0);
}
