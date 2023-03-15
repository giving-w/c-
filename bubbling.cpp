#include "bubbling.h"
void bubbling(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = (arr[j + 1]);
				(arr[j+1]) = temp;
			}
		}
	}


	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}