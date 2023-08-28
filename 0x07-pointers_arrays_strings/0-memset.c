#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: the first memory to be filled
 * @b: value to be filled
 * @n: number of lines to be filled starting with s
 * Return: pointer to s
 */

char *_memset(char *s,  char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
