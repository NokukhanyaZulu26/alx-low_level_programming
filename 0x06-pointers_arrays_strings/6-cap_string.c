#include "main.h"

/**
 * cap_string - Entry point
 * @m: pointer to string
 *
 * Return: pointer to m
 */
char *cap_string(char *m)
{
	int str = 0;

	while (m[str])
	{
		while (!(m[0] >= 97 && m[0] <= 122))
			str++;
		
		if (m[str - 1] == ' ' ||
				m[str - 1] == '\t' ||
				m[str - 1] == '\n' ||
				m[str - 1] == ',' ||
				m[str - 1] == ';' ||
				m[str - 1] == '.' ||
				m[str - 1] == '!' ||
				m[str - 1] == '?' ||
				m[str - 1] == '"' ||
				m[str - 1] == '(' ||
				m[str - 1] == ')' ||
				m[str - 1] == '{' ||
				m[str - 1] == '}' ||
				str == 0)
			m[str] -= 32;
		str++;
	}
	return (m);
}
