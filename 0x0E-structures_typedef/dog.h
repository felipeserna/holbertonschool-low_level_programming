#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 * struct dog - task 0
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: task 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}; /*structure for task 0 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
