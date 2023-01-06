#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: the number to find the factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
