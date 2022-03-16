#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long long int firstNum, secondNum, sum;

	firstNum = 0;
	secondNum = 1;
	for (int i = 2; i <= 50; ++i)
	{
		sum = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = sum;
		printf("%lld\n", sum);
	}
	return (0);
}
