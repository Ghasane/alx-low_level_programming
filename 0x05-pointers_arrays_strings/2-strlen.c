#include "main.h"
/**
 * _strlen - does something ...
 * @s: is some engtry
 * Return: return lenth
 */
int _strlen(char *s);
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
