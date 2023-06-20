#include <stdio.h>
/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, sum = 0;

	for (f = 0; f < 1024; f++)
	{
		if ((f % 3) == 0 || (f % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
