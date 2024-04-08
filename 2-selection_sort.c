#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: no return value (void)
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int temp = 0, atemp = 0, swap = 0;

	for (a = 0; a < size; a++)
	{
		b = a + 1;
		temp = array[a];
		while (b < size)
		{
			if (temp > array[b])
			{
				temp = array[b];
				atemp = b;
				swap = 1;
			}
			b++;
		}
		if (swap == 1)
		{
			array[atemp] = array[a];
			array[a] = temp;
			print_array(array, size);
		}
		swap = 0;
	}
}
