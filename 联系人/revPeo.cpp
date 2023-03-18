#include"text.h"

void revPeo(Peobook* pb) {
	string _name;
	int ret = -1;
	cout << "请输入修改人姓名：";
	cin >> _name;
	for (int i = 0; i < pb->sz; i++) {
		if (pb->p[i].name == _name) {
			ret = i;
			break;
		}
	}

	//没找到
	if (ret == -1) {
		cout << "查无此人；" << endl;
	}

	//找到了
	else {
		cout << "请输入姓名：";
		cin >> pb->p[ret].name;

		cout << "请输入年龄：";
		cin >> pb->p[ret].age;

		cout << "请输入性别：1 --- 男 2 --- 女：";
		cin >> pb->p[ret].sex;

		cout << "请输入电话号码：";
		cin >> pb->p[ret].number;

		cout << "请输入地址：";
		cin >> pb->p[ret].address;
	}
}