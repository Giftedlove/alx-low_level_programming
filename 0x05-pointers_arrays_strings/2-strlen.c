#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: pointer that checks the lenght of a string
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
return (0);
}
