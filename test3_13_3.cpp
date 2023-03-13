#include<iostream>
using namespace std;
int main() {
	int i;
	int x, y;
	for (i = 1; i < 101; i++) {
		//求个位数字：
		x = i % 10;
		//求十位数字：
		y = i / 10;
		if (x == 7 || y == 7 || i % 7 == 0) {
			cout << "敲桌子 ";
		}
		else {
			cout << i << " ";
		}
	}
}