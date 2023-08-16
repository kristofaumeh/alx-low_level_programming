#ifndef DOG_H
#define DOG_H
/**
* struct dog - a struct that creates a dog information
* @name: dog's name
* @age: dog's age
* @owner: owner's name
* Description: user struct file
*/

typedef struct dog
{
	 char *name;
	 float age;
	 char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
