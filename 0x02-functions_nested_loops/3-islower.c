#include "main.h"

/**
 * main - checks for lowercase
 * Return: nothing
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
