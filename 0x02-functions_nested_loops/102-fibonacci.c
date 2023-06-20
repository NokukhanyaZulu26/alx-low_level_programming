#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		_patchar("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
		_patchar("\n");
		else
			_patchar(", ");
	}

	return (0);
}
