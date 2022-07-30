#include "Sort.h"

void Sort::BubbleSort(int* const array, const int size)
{
	void swap(int* pElement1, int* pElement2);
	int pass{};
	int j{};

	for (pass = 0; pass < size - 1; pass++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}
