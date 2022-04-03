#include <stdio.h>

/**
 * main - a program that prints it's name
 * followed by a new line
 *
 * @argc: first argument to main
 * @argv: second argument to main
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
