#include<iostream>
using namespace std;

int main() {
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	for (int i = 0; i < 5; i++) {
		cout << "µØÖ·£º" << p << "\t";
		cout << "ÊıÖµ£º" << *p << endl;
		p++;
	}
}