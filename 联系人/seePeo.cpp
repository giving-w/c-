#include"text.h"

void seePeo(Peobook* pb) {
	int ret = -1;
	string _name;
	cout << "输入姓名：";
	cin >> _name;
	for (int i = 0; i < pb->sz; i++) {
		if (pb->p[i].name == _name) {
			ret = i;
			break;
		}
	}

	//如果没找到：
	if (ret == -1) {
		cout << "未找到" << endl;
	}
	//找到了
	else {
		cout << "名字：" << pb->p[ret].name << " 年龄：" << pb->p[ret].age << " 性别：";
		if (pb->p[ret].sex == 1) {
			cout << "男 ";
		}
		else {
			cout << "女 ";
		}
		cout << "电话号码：" << pb->p[ret].number << " 地址：" << pb->p[ret].address;
	}


}