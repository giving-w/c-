#include"text.h"

void lookPeo(Peobook* pb) {
	if (pb->sz == 0) {
		cout << "����ϵ��" << endl;
		return;
	}
	for (int i = 0; i < pb->sz; i++) {
		cout << "������" << pb->p[i].name << " ���䣺" << pb->p[i].age << " �Ա�";
		if (pb->p[i].sex == 1) {
			cout << "�� ";
		}
		else {
			cout << "Ů ";
		}

		cout << "�绰���룺" << pb->p[i].number << " ��ַ��" << pb->p[i].address << endl;
	}
}