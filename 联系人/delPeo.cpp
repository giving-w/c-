#include"text.h"

void delPeo(Peobook* pb) {
	int ret = -1;
	people temp=pb->p[pb->sz+1];
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
		for (int j = ret; j < pb->sz; j++) {
			pb->p[j] = pb->p[j + 1];
		}
		pb->sz--;
	}
}