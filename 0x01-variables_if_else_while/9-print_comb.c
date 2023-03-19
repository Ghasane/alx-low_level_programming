#include <stdio.h>
/**
* main - enter here more desc
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0;
	int a = 0;

		while (n < 10)
		{
			while (a < 10)
			{
			putchar(48 + n);
			putchar(48 + a);
			a++;
			}
			n++;
			a = 0;
		}
		putchar('\n');
	return (0);
}
