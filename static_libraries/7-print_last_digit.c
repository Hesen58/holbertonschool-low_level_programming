#include "main.h"
/**
 * print_last_digit - Something usefull
 * @n: Something more usefull
 *
 * Return: Something much more usefull
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
