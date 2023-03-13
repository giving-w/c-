#include<iostream>
#include<ctime>
using namespace std;
int main() {
	srand((unsigned int)time(NULL));
	int a, flag;
	flag = rand()%100 +1;
	cout << "please set a number : ";
	cin >> a;
	while (a != flag) {
		if (a > flag) {
			cout << "too big " << endl;
		}
		else {
			cout << "to small" << endl;
		}
		cout << "please set a number : ";
		cin >> a;
	}
	cout << "you win" << endl;
}