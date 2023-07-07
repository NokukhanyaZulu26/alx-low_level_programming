#include "main.h"
#include<stdio.h>

/**
 * main - Entry point
 *  @argc: value
 *  @argv: array
 *  Return: 0
 */
int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}
