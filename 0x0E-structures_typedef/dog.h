#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type dog about a dog
 * @name: name of dog
 * @age: age of th dog
 * @owner: owner of the dog
 *
 * Description: This data types stores all the info we
 * need about our dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*
 * dog_t *new_dog(char *name, float age, char *owner);
 * void free_dog(dog_t *d);
 */
char *_strcpy(char *dest, char *src);
int _strlen(char *s)


#endif