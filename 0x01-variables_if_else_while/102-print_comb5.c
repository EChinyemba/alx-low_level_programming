#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int x = 0, y = 1, xmax = 98, ymax = 99;

	while(x <= xmax)
	{
		y = x + 1;
		while(y <= ymax)
		{
			putchar(x < 9 ? 0 + '0' : (x / 10) + '0');
			putchar(x < 9 ? x + '0' : (x % 10) + '0');
			putchar(' ');
			putchar(y < 9 ? 0 + '0' : (y / 10) + '0');
			putchar(y < 9 ? y + '0' : (y % 10) + '0');

			if(x != xmax)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
