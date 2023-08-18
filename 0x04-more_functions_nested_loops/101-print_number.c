#include "main.h"

/**
 * print_number - prints an integer
 * @number: the number to be printed
 * Return: Always 0
 */

void print_number(int number)
{
	unsigned int tempnumber;

	tempnumber = number;
	if (number < 0)
	{
		_putchar('-');
		tempnumber = -number;
	}
	if (tempnumber / 10)
		print_number(tempnumber / 10);
	_putchar(tempnumber % 10 + '0');

}
