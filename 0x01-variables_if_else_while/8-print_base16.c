#include <stdio.h>

/**
 *main - print all the numbers of base 16 in lowercase
 *followed by a new line
 *Return:0
 */
int main(void)
{
	int n = '0';
	char ch = 'a';

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
