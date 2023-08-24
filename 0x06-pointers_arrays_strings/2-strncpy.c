#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: first string
 * @src: second string
 * @n: the number to be copied
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
