#ifndef FILE_DOG
#define FILE_DOG
/**
 * struct dog -structure dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owners dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
