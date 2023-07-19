#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the int to check
 *
 * Return: 1 and print + it n is graeter than zero
 * 0 and print 0 it n is zero
 * -1 and print - if n is less than zero
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
