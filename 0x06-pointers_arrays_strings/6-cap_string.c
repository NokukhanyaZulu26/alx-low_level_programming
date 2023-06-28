#include "main.h"

/**
 * cap_string - Entry point
 * @m: pointer to string
 *
 * Return: pointer to m
 */
char *cap_string(char *m)
{
	int index = 0;

	while (m[index])
	{
		while (!(m[0] >= 97 && m[0] <= 122))
			index++;
		
		if (m[index - 1] == ' ' ||
				m[index - 1] == '\t' ||
				m[index - 1] == '\n' ||
				m[index - 1] == ',' ||
				m[index - 1] == ';' ||
				m[index - 1] == '.' ||
				m[index - 1] == '!' ||
				m[index - 1] == '?' ||
				m[index - 1] == '"' ||
				m[index - 1] == '(' ||
				m[index - 1] == ')' ||
				m[index - 1] == '{' ||
				m[index - 1] == '}' ||
				index == 0)
			m[index] -= 32;
		
		index++;
	}
	
	return (m);
}
