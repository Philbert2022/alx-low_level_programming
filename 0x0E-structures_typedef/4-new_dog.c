#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *desk, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
* _strlen - fins the length of  string.
* @str: the string to be measured.
* return: the length of the string.
*/

int _strlen(char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}

/**
* _strcopy -copies a string pointer to by src ,including terminating null byte,
* @dest: the buffer storing the string copy.
* @src: The source String.
* return: the pointer to dest.
*/

char *_strcopy(char *dest, char *src)
{
int index = 0;

for (index = 0; src[index]; index++)
dest[index] = src[index];
dest[index] = '\0';
return (dest);
}

/**
* new_dog - creates a new dog.
* @name :name of the dog.
* @age: the age of the dog
* @owner: the owner of the dog.
*
* return: the new struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;
if (name == NULL || age < 0 || owner == null)
return (NULL);
doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
return (NULL);
doggo->name == maloc(sizeof(char) * (_strlen(name)) + 1);
if (doggo->name == null)
{
free(doggo->name);
free(doggo);
return (NULL);
}
doggo->name = _strcopy(doggo->name, name);
doggo->age = age;
dogoo->owner = _strcopy(doggo->owner, owner);
return (doggo);
}
