#include "main.h"

/**
 * main - print name followed by a new line
 * @argc: number of command line arguement
 * @argv: array that contain the command line arguement
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
