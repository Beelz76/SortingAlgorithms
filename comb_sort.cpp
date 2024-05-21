#include <iostream>
#include <time.h>

void combSort(int* arr, int n) {
	float k = 1.247;

	for (int step = n - 1; step >= 1; step /= k) {
		for (int i = 0; i < n - step; i++) {
			if (arr[i] > arr[i + step]) {
				int temp = arr[i];
				arr[i] = arr[i + step];
				arr[i + step] = temp;
			}
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

	combSort(arr, n);

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
