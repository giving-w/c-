#include"text.h"

void lookPeo(Peobook* pb) {
	if (pb->sz == 0) {
		cout << "无联系人" << endl;
		return;
	}
	for (int i = 0; i < pb->sz; i++) {
		cout << "姓名：" << pb->p[i].name << " 年龄：" << pb->p[i].age << " 性别：";
		if (pb->p[i].sex == 1) {
			cout << "男 ";
		}
		else {
			cout << "女 ";
		}

		cout << "电话号码：" << pb->p[i].number << " 地址：" << pb->p[i].address << endl;
	}
}