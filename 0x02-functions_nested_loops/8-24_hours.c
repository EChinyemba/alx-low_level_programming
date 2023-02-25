#include "main.h"

/**
 * main - prints every minute of the day
 * Return: always 
 */
void jack_bauer(void)
{
int min = 0;
int hr = 0;

for(hr = 0; hr <= 23; hr++)

for (min = 0; min <= 59; min++)
{
	_putchar((hr / 10) + '0');
	_putchar((hr % 10) + '0');
	_putchar(':');
	_putchar((min / 10) + '0');
	_putchar((min % 10) + '0');
	_putchar('\n');
}



}
