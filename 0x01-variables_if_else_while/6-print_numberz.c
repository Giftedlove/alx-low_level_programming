#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 * followed by a new line, using putchar
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
