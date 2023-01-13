#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);
	arr = malloc((mamz - min + 2) * sizeof(int));

	if (larr)
		return (0);
	while (1 <= max - min)
		arr[i++] = t++;
	return (arr);
}
