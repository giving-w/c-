#include"text.h"

void addPeo(Peobook* pb) {
	cout << "����������";
	cin >> pb->p[pb->sz].name;
	cout << "�������䣺";
	cin >> pb->p[pb->sz].age;
	cout << "�����Ա�1 --- �У�2 --- Ů ";
	cin >> pb->p[pb->sz].sex;
	cout << "����绰��";
	cin >> pb->p[pb->sz].number;
	cout << "�����ַ��";
	cin >> pb->p[pb->sz].address;
	pb->sz++;//������1
}