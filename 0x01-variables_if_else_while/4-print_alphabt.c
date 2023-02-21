
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the alphabet in lowercase without q and e
 * Return: 0
 */
int main(void)
{
char alp;

for(alp = 'a'; alp <= 'z'; alp++)
{
	if(alp == 'e' || alp == 'q')
		continue;
	putchar(alp);

}

	putchar('\n');

return (0);



}
