#include "main.h"
/**
 * int print_last_digit(int); - show the abc's
 * @n: get nummber
 * Return: 1 if pos 0 if 0 and -1 if neg
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	_putchar(48 + r);
	return(r);
}
