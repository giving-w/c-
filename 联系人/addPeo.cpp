#include"text.h"

void addPeo(Peobook* pb) {
	cout << "输入姓名：";
	cin >> pb->p[pb->sz].name;
	cout << "输入年龄：";
	cin >> pb->p[pb->sz].age;
	cout << "输入性别：1 --- 男，2 --- 女 ";
	cin >> pb->p[pb->sz].sex;
	cout << "输入电话：";
	cin >> pb->p[pb->sz].number;
	cout << "输入地址：";
	cin >> pb->p[pb->sz].address;
	pb->sz++;//人数加1
}