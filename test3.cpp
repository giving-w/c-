#include<iostream>
using namespace std;

//元素逆置
int main() {
	int arr[5] = { 4,7,1,9,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i, t;
	
	//打印没改之前：
	for (i = 0; i < sz; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//改变：
	for (i = 0; i < sz / 2; i++) {
		t = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = t;	
	}

	//打印修改之后：
	for (i = 0; i < sz; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}