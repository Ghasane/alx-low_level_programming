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

	while (x < n)
	{
	if (x != (n - 1))
		printf("%d, ", a[x]);
	else
		printf("%d", a[x]);
	x++;
	}
	printf("\n");
}
