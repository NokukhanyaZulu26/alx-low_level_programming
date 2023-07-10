#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: int
 * @height: int
 * Return: 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **a, b, c;

	a = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || a == 0)
	{
		return (NULL);
	}
	else
	{
		for (b = 0; b < height; b++)
		{
			a[b] = malloc(sizeof(**a) * width);
			if (a[b] == 0)
			{
				while (b--)
					free(a[b]);
				free(a);
				return (NULL);
			}
			for (c = 0; c < width; c++)
				a[b][c] = 0;
		}
	}
	return (a);
}
