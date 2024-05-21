#include <iostream>
#include <time.h>

void insertionSort(int* arr, int n) {
	for (int i = 1; i < n; i++) {
		int j = i;
		int x = arr[i];

		while (j > 0 && arr[j - 1] > x) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = x;
	}
}

int main()
{
	const int n = 10;
	int arr[n];

	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}

	insertionSort(arr, n);

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
