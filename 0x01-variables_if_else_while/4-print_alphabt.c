#include <stdio.h>

/**
* main -program that prints the alphabet in lowercase
* followed by a new line
* Return: 0
*/
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
