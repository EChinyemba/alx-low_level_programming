#include "main.h"

/**
 * main - prints sign of a number
 * Return: 1 if the number is greater than zero, 0 if number is zero and -1 if the number is less than zero.
 */
int print_sign(int n)
{

if(n > 0)
_putchar('+');

	return 1;

 if(n == 0)
 {
 _putchar ('0');

	return 0;
 }
else
_putchar('-');

	return -1;
}	
	
