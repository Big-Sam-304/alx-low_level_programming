#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type dog about a dog
 * dog_t - typedef for struct dog;
 * @name: name of dog
 * @age: age of th dog
 * @owner: owner of the dog
 *
 * Description: This data types stores all the info we
 * need about our dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_str_cpy(char *src, char *dest);
int _strlen(char *str);

#endif
