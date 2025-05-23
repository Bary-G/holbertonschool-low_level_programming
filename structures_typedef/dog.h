#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - structure
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Return: no
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
