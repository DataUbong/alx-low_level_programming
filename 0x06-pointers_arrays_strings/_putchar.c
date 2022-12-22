#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c in to stdout
 * @c: the character to print
 * Return: 1 on success
 * On error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
