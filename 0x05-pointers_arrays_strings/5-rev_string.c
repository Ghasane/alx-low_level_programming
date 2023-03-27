#include "main.h"
/**
 * rev_string - does something ...
 * @s: is some engtry
 */
void rev_string(char *s)
{
	int n = 0;
	int x;
	char c;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	for (x = 0; x < n; x++, n--)
	{
		c = s[x];
		s[x] = s[n];
		s[n] = c;
	}
}
