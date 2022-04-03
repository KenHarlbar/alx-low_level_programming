#include <stdio.h>

/**
 * main - a program that prints the number
 * of arguments passed it followed by
 * a new line
 *
 * @argc: first argument to main
 * @argv: second argument to main
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
