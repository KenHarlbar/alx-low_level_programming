#include "main.h"

/**
 * print_last_digit - compute and return the last digit of n
 *
 * @n: number
 *
 * Return: return last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		_putchar(-lastDigit + 48);
		return (-lastDigit);
	}
	_putchar(lastDigit + 48);
	return (lastDigit);
}
