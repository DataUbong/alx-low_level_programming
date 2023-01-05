#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new lone.
 * @s: The strong to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
