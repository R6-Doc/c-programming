#include "holberton.h"
/**
 * print_numbers - Print Numbers.
 * Return: Always 0.
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		_putchar(a + '0');
			a++;
	}
	_putchar('\n');
}
