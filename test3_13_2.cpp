#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a = 100;
	int x, y, z;
	do {
		x = a / 100;//��ȡ��λ����
		y = a / 10 % 10;//��ȡʮλ����
		z = a % 10;//��ȡ��λ����
		if (pow(x, 3) + pow(y, 3) + pow(z, 3) == a) {
			cout << a << " ";
		}
		a++;
	} while (a < 1000);
}