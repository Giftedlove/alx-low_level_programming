#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: the integer value
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
