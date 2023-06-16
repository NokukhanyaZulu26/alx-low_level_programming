#include <stdio.h>

/**
 * main - Entry point
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 28; n <= 46; n++)
	{
		for (m = 29; m <= 47; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 46 || m != 47)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
