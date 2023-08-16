#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: natural number from where the printing starts
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%d", i);
		if (i < 98)
			printf(", ");
	}
	for (i = n; i > 98; i--)
	{
		printf("%d", i);
		if (i > 98)
			printf(", ");
	}
	printf("98\n");
}
