#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of a string
* @s: string
* Return: the length of the string
*/
int _strlen(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
/**
 *_strcpy - Entry point
* @dest: pointer
* @src: string
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int len, y;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (y = 0; y < len; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}
/**
* new_dog - Entry point
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
