#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: the number to find the factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	int result = n;

	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
