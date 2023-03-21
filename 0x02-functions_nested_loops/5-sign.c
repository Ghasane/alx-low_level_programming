#include "main.h"
/**
 * _isalpha - show the abc's
 * @n: get nummber
 * Return: 1 if pos 0 if 0 and -1 if neg
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
