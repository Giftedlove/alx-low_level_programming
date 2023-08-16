#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @num: check the last digit
 * Return: 0
 */
int print_last_digit(int num)
{
	int lastdigit;

	if (num >= 0)
		lastdigit = (num % 10);
	else
		lastdigit = -(num % 10);
	_putchar(lastdigit + '0');
	return (lastdigit);
}
