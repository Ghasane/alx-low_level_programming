#include "main.h"
/**
 * print_alphabet_x10 - show the abc's
 */
void print_alphabet_x10(void)
{
	char n = 'a';
	int a = 0;
	
	while (a < 10)
	{
		while (n <= 'z')
		{
		_putchar(n);
		n++;
		}
	a++;
	n = 'a';
	_putchar('\n');
	}
}
