#include "main.h"
/**
 * _puts - does something ...
 * @str: is some engtry
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar (str[n]);
		n++;
	}
	_putchar ('\n');
}
