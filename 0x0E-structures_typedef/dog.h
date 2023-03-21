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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* #ifndef DOG_H */
/*void init_dog(struct dog *d, char *name, float age, char *owner);*/
