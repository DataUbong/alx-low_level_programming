#include <stdio.h>
/**
 * main - prints the names of the file program was compiled from
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
