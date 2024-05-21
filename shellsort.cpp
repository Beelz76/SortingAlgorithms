#include <iostream>
#include <time.h>

void shellSort(int* arr, int n) {
	for (int d = n / 2; d > 0; d /= 2) {
		for (int i = d; i < n; i++) {
			int x = arr[i];
			int j;
			for (j = i; j >= d && arr[j - d] > x; j -= d) {
				arr[j] = arr[j - d];
			}
			arr[j] = x;
		}
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

	shellSort(arr, n);

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
