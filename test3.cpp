#include<iostream>
using namespace std;

//Ԫ������
int main() {
	int arr[5] = { 4,7,1,9,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i, t;
	
	//��ӡû��֮ǰ��
	for (i = 0; i < sz; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//�ı䣺
	for (i = 0; i < sz / 2; i++) {
		t = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = t;	
	}

	//��ӡ�޸�֮��
	for (i = 0; i < sz; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}