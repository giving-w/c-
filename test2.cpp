#include<iostream>
using namespace std;

int main() {
	int arr[5] = { 300,350,400,200,250 };
	int max=0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max=arr[i];
		}
	}
	cout << "the most fact pig's weight is " << max << endl;
}