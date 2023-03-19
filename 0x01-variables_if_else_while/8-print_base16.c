#include <stdio.h>
/**
* main - enter here more desc
* Return: Always 0 (Success)
*/
int main(void)
{
	char n = 0;
	char a = 'a';

		while (n < 10)
		{
			putchar(48 + n);
			n++;
		}
		while (a <= 'f')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
	return (0);
}
