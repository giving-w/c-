#include<iostream>
using namespace std;
int main() {

//��һ��ӰƬ���д�֣�
	int a;
	cout << "Please set a number to this movies : ";
	cin >> a;
	switch (a) {
		case 10:
		case 9:
			cout << "this movie is prefect" << endl;
			break;
		case 8:
		case 7:
		case 6:
			cout << "this movies is good" << endl;
			break;
		default:
			cout << "this movies is usual" << endl;
			break;

	}
}