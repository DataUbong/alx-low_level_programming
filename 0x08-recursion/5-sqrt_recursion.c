#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate square root
 * Return: the result of square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
}
/**
 * actual_sqrt_recursion - recurses to find the natural square root
 * @n: number to calculate square root
 * @i: iterator
 * Return: the result of square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (n, i + 1);
}
