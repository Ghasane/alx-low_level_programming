#include "main.h"
/**
 * puts2 - does something ...
 * @str: is some engtry
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		_putchar('\n');
		n = n + 2;
	}
}
