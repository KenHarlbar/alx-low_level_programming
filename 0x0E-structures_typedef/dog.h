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
struct dog
{
	float age;
	char *name;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
