#include "main.h"

/**
 * _atoi - Entry point
 * @s: pointer to char
 * Return: value of string
 */
int _atoi(char *s)
{
	int b = 0;
	int sign = 1;
	int num = 0;

	while (s[b] != '\0')
	{
		if (s[b] == '-')
		{
			sign *= -1;
		}
		else if (s[b] >= '0' && s[b] <= '9')
		{
			num = num * 10 + (s[b] - '0') * sign;

			if (s[b + 1] < '0' || s[b = 1] > '9')
			{
				break;
			}
		}
		b++;
	}
	return (num);
}
