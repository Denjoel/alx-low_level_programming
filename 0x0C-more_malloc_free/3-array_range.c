#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: the min range of values stored
 * @max: the max range of values stored and no. of elements
 * Return: pointer to new array
 */

int *array_range(int min, int max)

{
	int *ptr;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (j = 0; min <= max; j++)
		ptr[j] = min++;

	return (ptr);
}
