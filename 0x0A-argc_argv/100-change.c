#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * @argc: value
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int g, result = 0, coin = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (g = 0; g < 5; g++)
		{
			if (coin >= cents[g])
			{
				result += coin / cents[g];
				coin = coin % cents[g];
				if (coin % cents[g] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
