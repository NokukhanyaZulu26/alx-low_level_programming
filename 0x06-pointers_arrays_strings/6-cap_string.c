#include "main.h"

/**
 * cap_string - Entry point
 * @str: pointer to string
 *
 * Return: pointer to be changed
 */
char *cap_string(char *str)
{
	int j  = 0;

	while (str[j])
	{
		while (!(str[j] >= 97 && str[j] <= 122))

			j++;
		if (str[j - 1] == ' ' ||
		str[j - 1] == '\t' ||
		str[j - 1] == '\n' ||
		str[j - 1] == ',' ||
		str[j - 1] == ';' ||
		str[j - 1] == '.' ||
		str[j - 1] == '!' ||
		str[j - 1] == '?' ||
		str[j - 1] == '"' ||
		str[j - 1] == '(' ||
		str[j - 1] == ')' ||
		str[j - 1] == '{' ||
		str[j - 1] == '}' ||
		j == 0)
			str[j] -= 32;

		j++;
	}

	return (str);
}
