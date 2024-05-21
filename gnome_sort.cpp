#include <iostream>
#include <time.h>

void gnomeSort(int* arr, int n) {
	int i = 1, j = 2;

	while (j < n) {
		if (arr[i - 1] > arr[i]) {
			int temp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
			i--;
			if (i > 0) {
				continue;
			}
		}
		i = j++;
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

	gnomeSort(arr, n);

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
