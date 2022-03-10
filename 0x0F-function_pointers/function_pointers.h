#ifndef FUNC_H
#define FUNC_H

/**
 * struct dog - struct
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description:
 * Author: Alex Senges
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNC_H */
