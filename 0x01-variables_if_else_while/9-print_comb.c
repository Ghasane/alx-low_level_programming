#include <stdio.h>
/**
* main - enter here more desc
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0;

		while (n < 10)
		{
			putchar(48 + n);
			putchar(',');
			putchar(' ');
			n++;
		}
		putchar('\n');
	return (0);
}
