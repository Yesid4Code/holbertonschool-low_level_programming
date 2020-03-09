#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Struct that contains properties of a dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the owner.
 *
 * Description: Structure used to create different profiles for dogs.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for the structure dog.
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
