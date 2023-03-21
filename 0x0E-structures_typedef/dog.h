#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: type member 1
 * @age: type member 2
 * @owner: type member 3
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* #ifndef DOG_H */
