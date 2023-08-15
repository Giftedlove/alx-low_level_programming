#include "main.h"

/**
 * _isalpha - checking for lowercase or uppercase character
 * @c: alphabetic characters to be checked
 * Return: 1 or 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
