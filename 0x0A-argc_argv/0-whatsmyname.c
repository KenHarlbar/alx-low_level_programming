#include "main.h"

/**
 * main - a program that prints it's name
 * followed by a new line
 *
 * @argc: first argument to main
 * @argv: second argument to main
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		_putchar(*(argv + i));
	}
	_putchar('\n');
	return (0);
}
