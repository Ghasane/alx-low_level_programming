#include "main.h"
/**
 * print_last_digit - show the abc's
 * @n: get nummber
 * Return: 1 if pos 0 if 0 and -1 if neg
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (n < 0)
	r = -(n % 10);
	_putchar('0' + r);

	return (r);
}
