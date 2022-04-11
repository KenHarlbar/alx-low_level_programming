#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - a new type named dog
 *
 * @age: age
 * @name: name string
 * @owner: owner string
 *
 * Description: This is a general data type for
 * identifying dogs
 */
typedef struct dog
{
	float age;
	char *name;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
