#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: pointer to char
 * @src: pointer to second char
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int b = -1;

	do {
		b++;
		dest[b] = src[b];
	} while (src[b] != '\0');

	return (dest);
}
