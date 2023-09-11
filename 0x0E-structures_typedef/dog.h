#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure to represent information about a dog
 * @name: The name of the dog (string)
 * @age: The age of the dog (float)
 * @owner: The owner of the dog (string)
 *
 * Description: This structure represents information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
