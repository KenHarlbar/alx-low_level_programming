#include <stdio.h>

/**
 * main - a program that prints all the
 * arguments it receives
 *
 * @argc: first argument to main
 * @argv: second argument to main
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
