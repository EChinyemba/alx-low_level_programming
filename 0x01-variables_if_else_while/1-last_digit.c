#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - A program that prints the last digit
 * Return: 0
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	pintf("Last digit of %d is %d and is greater than 5\n", n);
	else if (n == 0)
	printf("Last digit of %d is %d and is 0\n", n);
	else
	printf("Last digit of %d is %d and is less than 6 andnot 0\n", n);
	return (0);
}
