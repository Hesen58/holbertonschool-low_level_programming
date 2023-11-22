#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * reset_to_98 - Something useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *new;
  
  new = malloc(sizeof(dog_t));
  if (new == NULL)
	{
	  free(new);
	  return (NULL);
	}
  new->name = malloc(sizeof(name));
  if (new->name == NULL)
	{
	  free(new);
	  return (NULL);
	}
  strcpy(new->name, name);
  new->owner = malloc(sizeof(owner));
  if (new->owner == NULL)
	{
	  free(new->name);
	  free(new);
	  return (NULL);
	}
  strcpy(new->owner, owner);
  new->age = age;
  return (new);	
}
