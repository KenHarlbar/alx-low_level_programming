#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int firstNum, secondNum, sum;
	int i;

	firstNum = 0;
	secondNum = 1;
	for (i = 2; i <= 50; ++i)
	{
		sum = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = sum;
		printf("%ld\n", sum);
	}
	return (0);
}
