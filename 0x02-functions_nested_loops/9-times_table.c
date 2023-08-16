#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: 0
 */
void times_table(void)
{
	int i;
	int result;

	for (i = 0; i <= 10; i++)
	{
		result = 9 * i;
		_putchar('9');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar(i + '0');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		_putchar(result + '0');
		_putchar('\n');
	}
}
