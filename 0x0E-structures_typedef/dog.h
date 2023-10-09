#ifndef struct_h
#define struct_h

/**
 *struct dog - struct for dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 *Description: this is the structure of dog
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
#endif
