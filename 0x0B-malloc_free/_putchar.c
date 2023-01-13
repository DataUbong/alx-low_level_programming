#include "main.h"

/**
 * _putchar - write character c to stdout
 * @c: Character to be printed
 * Return: On Success 1
 * On error, -1 is returned and error is set appropraitely
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
