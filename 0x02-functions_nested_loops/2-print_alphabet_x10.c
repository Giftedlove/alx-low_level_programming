#include "main.h"

/**
 * prints 10 times the alphabeth, in lowercase
 * followed by a new line.
 *
 * Return:0
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(i);
			_putchar('\n');
		}
	}
}
