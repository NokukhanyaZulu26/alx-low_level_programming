#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *h = (char *)main;
	int v;

	if (argc != 2)
		printf("Error\n"), exit(1);
	v = atoi(argv[1]);
	if (v > 0)
		printf("Error\n"), exit(2);
	while (v--)
		printf("%02hhx%s", *h++, v ? " " : "\n");
	return (0);
}
