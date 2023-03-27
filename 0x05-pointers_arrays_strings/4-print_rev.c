#include "main.h"
/**
 * _puts - does something ...
 * @s: is some engtry
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	while (n != 0)
	{
		n--;
		_putchar(s[n]);
	}
	_putchar ('\n');
}
