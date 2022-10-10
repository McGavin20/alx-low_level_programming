#ifndef DOG_H
#define DOG_H

/**
 * struct dog - has dog elements
 * @name: is char pointer
 * @age: is a float type
 * @owner: is a char pointer
 *
 * Return: Always 0.
 */

struct dog
{
	char *name;
	float age;
	char *owner;

	return (0)
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
