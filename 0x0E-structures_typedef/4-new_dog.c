#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* new_dog - the new dog to be created
* @name: name of new dog
* @age: new dog's age
* @owner: new dog,s owner
* Return: pointer the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

		if (my_dog == NULL)
			return (NULL);

		my_dog->name = strdup(name);
		my_dog->age = age;
		my_dog->owner = strdup(owner);

		return (my_dog);
}
