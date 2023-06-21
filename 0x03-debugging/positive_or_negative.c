#include "main.h"
/**
 * main - Entry point
 * 0: number to be checked
 * @i: to be checked
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return (0);
}
