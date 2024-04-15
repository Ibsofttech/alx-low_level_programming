#include "search_algos.h"

/**
 * linear_search - performs a linear search on array
 *
 * @array: the array we want to serach
 * @size: element numbers in the array
 * @value: the value we want to search for
 *
 * Return: the index where value is found or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t idx;

		for (idx = 0; idx < size; idx++)
		{
			printf("Value checked array[%ld] = [%d]\n"
				, idx, array[idx]);
			if (array[idx] == value)
				return (idx);
		}
		return (-1);
	}
	return (-1);
}
