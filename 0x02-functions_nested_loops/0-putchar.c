#include "main.h"

/**
 * main - print a print a program that prints _putchar
 *followed by a new line
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
	return (0);
}
