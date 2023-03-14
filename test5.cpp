#include<iostream>
using namespace std;

int main() {
	int arr[10] = { 0,3,2,56,25,75,788,32,89,32 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	//打印最初
	for (int i = 0; i < sz ; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//变化
	for (int i = 0; i < sz - 1 ; i++) {
		int mark;
		for (int j = 0; j < sz - 1 - i; j++) {
			mark = 0;
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				mark++;
			}
		}
		if (mark == 0) {
			break;
		}
	}

	//打印结果
	for (int i = 0; i < sz ; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}