#include <stdio.h>
/**
* main - enter here more desc
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0;
	int a = 1;
	int b = 2;

		while (n < 10)
		{
			while (a < 10)
			{
				while (b < 10)
				{	
				putchar(48 + n);
				putchar(48 + a);
				putchar(48 + b);
				if (n == 7)
				{
				putchar('\n');
				return (0);
				}
				putchar(',');
				putchar(' ');
				b++;
				}
			a++;
			b = a +1;
			}
			n++;
			a = n + 1;
			b = a + 1;
		}
	return (0);
}
