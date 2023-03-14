#include<iostream>
using namespace std;

int main() {
	int arr[5] = { 1,5,8,2,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int end = sz;
	int start = 0, t;

	for (int i = 0; i < sz; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	while (start < end) {
		t = arr[start];
		arr[start] = arr[end - 1];
		arr[end - 1] = t;
		start++;
		end--;
	}

	for (int i = 0; i < sz; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

}