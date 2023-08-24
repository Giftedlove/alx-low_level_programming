#include "main.h"

/**
 * _strncat - function that concatenates two string
 * @dest: first string
 * @src: second string
 * @n: number of times src should be counted
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';
	return (dest);
}
