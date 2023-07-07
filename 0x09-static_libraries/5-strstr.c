#include "main.h"

/**
 * _strstr - Entry point
 * @needle: substring to be located
 * @haystack: string to be searched
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int t;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		t = 0;

		if (haystack[t] == needle[t])
		{
			do {
				if (needle[t + 1] == '\0')
					return (haystack);
				t++;
			} while (haystack[t] == needle[t]);
		}

		haystack++;
	}
	return ('\0');
}
