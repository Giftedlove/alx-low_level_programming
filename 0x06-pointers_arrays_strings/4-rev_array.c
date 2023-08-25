#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: first string
 * @n: number of element of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (j = 0; j < n / 2; j++)
	{
		i = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = i;
	}
}
