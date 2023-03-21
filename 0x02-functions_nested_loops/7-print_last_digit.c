#include "main.h"i
/**
 * int print_last_digit - show the abc's
 * @n: get nummber
 * Return: 1 if pos 0 if 0 and -1 if neg
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -n;
	r = n % 10;
	_putchar(48 + r);
	return (r);
}
