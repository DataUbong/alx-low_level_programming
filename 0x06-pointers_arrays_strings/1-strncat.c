#include "main.h"

/**
 * _strncat - concatenate two string using most inputted number from src
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * @n: the maximum number of bytes to copy from src
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
