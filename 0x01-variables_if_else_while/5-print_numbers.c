#include <stdio.h>

/**
 *main - program that prints all single digit numbers of base 10 starting from
 *followed by a new line
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
		printf('\n');
		return (0);
	}
}
