#include "main.h"
#include <stdio.h>
/**
 * print_array - does something ...
 * @a: is some engtry
 * @n: other thing
 */
void print_array(int *a, int n)
{
	int x = 0;
	
	while (x <= n)
	{
	printf ("%d", a, a[x]);
	if (x == n)
		break;
	printf (", "):
	x++;
	}
}
