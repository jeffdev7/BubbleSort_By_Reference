#include <iostream>
#include "Sort.h"

#define SIZE 10

int main()
{
	int a[SIZE] = { 12,21,53,10,12,33,68,45,37, 17 };
	int i{};

	std::cout << "Data items in original order\n";

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	Sort::BubbleSort(a, SIZE);
	printf("\nData items in ascending order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	printf("\n");
	return 0;
}

void swap(int* pElement1, int* pElement2)
{
	int hold = *pElement1;
	*pElement1 = *pElement2;
	*pElement2 = hold;
}
