#include"text.h"

void seePeo(Peobook* pb) {
	int ret = -1;
	string _name;
	cout << "����������";
	cin >> _name;
	for (int i = 0; i < pb->sz; i++) {
		if (pb->p[i].name == _name) {
			ret = i;
			break;
		}
	}

	//���û�ҵ���
	if (ret == -1) {
		cout << "δ�ҵ�" << endl;
	}
	//�ҵ���
	else {
		cout << "���֣�" << pb->p[ret].name << " ���䣺" << pb->p[ret].age << " �Ա�";
		if (pb->p[ret].sex == 1) {
			cout << "�� ";
		}
		else {
			cout << "Ů ";
		}
		cout << "�绰���룺" << pb->p[ret].number << " ��ַ��" << pb->p[ret].address;
	}


}