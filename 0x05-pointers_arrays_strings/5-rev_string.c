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
	for (x = 0; x < n; x++,n--)
	{
		c = s[n];
		s[n] = s[x];
		s[n] = c;
	}
}
