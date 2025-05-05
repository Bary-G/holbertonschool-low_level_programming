#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - my function
 * @s: my value
 *
 * Return: my function
 */

 int _strlen(char *s)
 {
	 int l = 0;

	 while (s[l] != '\0')
	 {
		 l++;
	 }
	 return (l);
 }

 /**
 * _strcpy - my function
 * @dest: my pointer
 * @src: my value
 *
 * Return: my function
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog struct.
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: new struct data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(_strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);

	dog->owner = malloc(_strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->owner, owner);

	dog->age = age;
	return (dog);
}
