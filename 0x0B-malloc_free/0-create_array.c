#include "main.h"
#include <stdlib.h>

/**
 * create_array -> creating array
 * @size: size of array to be created
 * @c: character an array is initialized with
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	/* check if malloc is successful */

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
