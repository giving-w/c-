#include"text.h"

void revPeo(Peobook* pb) {
	string _name;
	int ret = -1;
	cout << "�������޸���������";
	cin >> _name;
	for (int i = 0; i < pb->sz; i++) {
		if (pb->p[i].name == _name) {
			ret = i;
			break;
		}
	}

	//û�ҵ�
	if (ret == -1) {
		cout << "���޴��ˣ�" << endl;
	}

	//�ҵ���
	else {
		cout << "������������";
		cin >> pb->p[ret].name;

		cout << "���������䣺";
		cin >> pb->p[ret].age;

		cout << "�������Ա�1 --- �� 2 --- Ů��";
		cin >> pb->p[ret].sex;

		cout << "������绰���룺";
		cin >> pb->p[ret].number;

		cout << "�������ַ��";
		cin >> pb->p[ret].address;
	}
}