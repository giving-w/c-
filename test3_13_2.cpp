#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a = 100;
	int x, y, z;
	do {
		x = a / 100;//获取百位数字
		y = a / 10 % 10;//获取十位数字
		z = a % 10;//获取个位数字
		if (pow(x, 3) + pow(y, 3) + pow(z, 3) == a) {
			cout << a << " ";
		}
		a++;
	} while (a < 1000);
}