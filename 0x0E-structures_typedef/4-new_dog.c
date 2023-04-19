#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: string to check
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - copy the string
 * @dest: destination
 * @src: source
 * Return: *ptr to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
		i++;
	for ( ; j <= i; j++)
		dest[j]	= src[j];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dig
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: *ptr to newly created dog, otherwise (NULL)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len_name;

	int len_owner;

	len_name = _strlen(name);

	len_owner = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	dog->name = (char *)malloc(sizeof(char) * (len_name + 1));

	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = (char *)malloc(sizeof(char) * (len_owner + 1));

	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
