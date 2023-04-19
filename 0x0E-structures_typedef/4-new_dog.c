#include "main.h"
#include "dog.h"

/**
 * new_dog - get new dog record
 * @name: new name entry for dog
 * @age: new age entry for dog
 * @owner: new name entry for owner
 * Return: new struct if successful
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *m_dog;
	char *nword, *oword;
	int nlength = 0; 
	int olength = 0;
	int m;
	
	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	while (name[nlength])
	{
		nlength++;
	}
	while (owner[olength])
	{
		olength++;
	}
	m_dog = malloc(sizeof(dog_t));
	if (m_dog == NULL)
	{
		return (NULL);
	}
	nword = malloc(nlength + 1);
	if (nword  == NULL)
	{
		return (NULL);
	}
	for (m = 0; name[m]; m++)
	{
		nword[m] = name[m];
	}
	nword[m] = '\0';
	oword = malloc(olength + 1);
	if (oword == NULL)
	{
		return (NULL);
	}
	for (m = 0; owner[m]; m++)
	{
		oword[m] = owner[m];
	}
	oword[m] = '\0';
	m_dog->name = nword;
	m_dog->age = age;
	m_dog->owner = oword;
	return (m_dog);
}

