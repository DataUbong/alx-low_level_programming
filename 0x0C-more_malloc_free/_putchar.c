#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on sucess 1
 * On error, -1 is returned, and the error is set appropraitely
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
