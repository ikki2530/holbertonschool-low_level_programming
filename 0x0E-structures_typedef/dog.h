#ifndef _DOG_
#define _DOG_
/**
 * struct dog - dog info
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: struct for dog data
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
