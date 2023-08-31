#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 *  @s: the string to be printed
 *  Return: 0
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}

