#include<stdlib.h>
#include<stdio.h>

/**
 * main - Entry point
 * @argc: value
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *k;

	while (--argc)
	{
		for (k = argv[argc]; *k; k++)
			if (*k < '0' || *k > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
