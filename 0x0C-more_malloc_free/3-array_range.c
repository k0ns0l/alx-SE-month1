#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an arrayay of integers.
 * @min: index
 * @max: end
 * Return: Pointer to newly created array (success).
 */
int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(*array));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < (max - min) + 1; i++)
		array[i] = min + i;

	return (array);
}
