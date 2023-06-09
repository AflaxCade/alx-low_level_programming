#include "function_pointers.h"

/**
* int_index - search for an integer
* @array: vlaue to check integer array
* @size: size of the array
* @cmp: pointer function
*
* Return: index of first element for which the cmp funtion does not return 0
* If no element matches, returns -1, else -1 if size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (x = 0; x < size; x++)
			if (cmp(array[x]))
				return (x);
	}
	return (-1);
}
