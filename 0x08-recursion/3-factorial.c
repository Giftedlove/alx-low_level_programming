#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the given number to be returned as factorial
 * Return: n
 */
int factorial(int n)
{
	if (n <= -1)
		return (-1);
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
