#include <iostream>
#include <time.h>

void quicksort(int* arr, int b, int e) {
	if (b < e) {
		int pivot = arr[(b + e) / 2];
		int l = b, r = e;

		do {
			while (arr[l] < pivot) {
				l++;
			}
			while (arr[r] > pivot) {
				r--;
			}
			if (l <= r) {
				int temp = arr[l];
				arr[l] = arr[r];
				arr[r] = temp;
				l++;
				r--;
			}
		} while (l <= r);
		quicksort(arr, b, r);
		quicksort(arr, l, e);
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

	quicksort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
