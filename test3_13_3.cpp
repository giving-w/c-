#include<iostream>
using namespace std;
int main() {
	int i;
	int x, y;
	for (i = 1; i < 101; i++) {
		//���λ���֣�
		x = i % 10;
		//��ʮλ���֣�
		y = i / 10;
		if (x == 7 || y == 7 || i % 7 == 0) {
			cout << "������ ";
		}
		else {
			cout << i << " ";
		}
	}
}