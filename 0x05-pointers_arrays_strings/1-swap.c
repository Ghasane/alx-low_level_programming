#include "main.h"
/**
 * swap_int - swap thing ...
 * @a: is some engtry
 * @b: other entry
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
