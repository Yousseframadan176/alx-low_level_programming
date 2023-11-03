#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: Minimum range of values to be stored.
 * @max: Maximum range of values to be stored and the number of elements.
 *
 * Return: Pointer to the new array or NULL if allocation fails.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
