#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

for (a = 0; a <= 8; a++)

for (b = a + 1; b <= 9; b++)

	if (a != b)
	{
		putchar(a + '0');
		putchar(b + '0');
		if (a + b == 89)
			break;
		if (a + b < 89)
		{
			putchar(',');
		
			putchar(' ');
		}
	}
	
	putchar('\n');

	return (0);

}
