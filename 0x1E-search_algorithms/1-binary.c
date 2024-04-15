#include "search_algos.h"

/**
 * print_array - prints out the array
 *
 * @array: the array to print
 * @start: the begining of where to print from
 * @end: where to stop printing
 */
void print_array(int *array, size_t start, size_t end)
{
	char *comma = NULL;

	printf("Searching the array: ");

	for (; start <= end; start++)
	{
		if (comma != NULL)
			printf("%s", comma);
		printf("%d", array[start]);
		comma = ", ";
	}
	printf("\n");
}

/**
 * binary_search - using binary search to fimd value in an array
 *
 * @array: a pointer to the first element in the array
 * @size: the number of elementsnin the array
 * @value: the value to search for in the array
 *
 * Return: the index where value is found,
 *	-1 if array is NULL or if value is not found
 */

int binary_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t start = 0, mid, end = size - 1;

		print_array(array, start, end);
		while (start != end)
		{
			mid = (start + end) / 2;

			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				start = mid + 1;
			else
				end = mid - 1;
			print_array(array, start, end);
		}
		if (array[start] == value)
			return (end);
		return (-1);
	}
	return (-1);
}
