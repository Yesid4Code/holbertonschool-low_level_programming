#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function that count the size of a string.
 * @s: a pointer to a string.
 *
 * Return: i, the size of string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - function that copy a string.
 * @dest: destiny of the string.
 * @src: origin of the string.
 *
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creats a new dog structure.
 * @name: the name of the new dog.
 * @age: the age of the new dog.
 * @owner: the owner of the new dog.
 * Return: a pointer to the new space memory.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	(*ndog).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (((*ndog).name) == NULL)
	{
		free((*ndog).name);
		free(ndog);
		return (NULL);
	}
	_strcpy((*ndog).name, name);

	(*ndog).age = age;

	if (owner == NULL)
	{
		free((*ndog).name);
		free(ndog);
		return (NULL);
	}

	(*ndog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (((*ndog).owner) == NULL)
	{
		free((*ndog).name);
		free((*ndog).owner);
		free(ndog);
		return (NULL);
	}
	_strcpy((*ndog).owner, owner);

	return (ndog);
}
