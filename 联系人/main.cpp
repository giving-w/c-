#include"text.h"

int main() {
	Peobook pb;
	int choice;

	do {
		menu();
		cin >> choice;
		switch (choice) {
			case 1://������ϵ��
				addPeo(&pb);
				system("pause");
				system("cls");
				break;
			case 2://��ʾ��ϵ��
				lookPeo(&pb);
				system("pause");
				system("cls");
				break;
			case 3://ɾ����ϵ��
				delPeo(&pb);
				system("pause");
				system("cls");
				break;
			case 4://������ϵ��
				seePeo(&pb);
				system("pause");
				system("cls");
				break;
			case 5://�޸���ϵ��
				revPeo(&pb);
				system("pause");
				system("cls");
				break;
			case 6://�����ϵ��
				clsPeo(&pb);
				system("pause");
				system("cls");
				break;
			case 0://�˳�
				cout << "��ӭ�´�ʹ�ã�" << endl;
				system("pause");
				return 0;
			default:
				cout << "����������������룺" << endl;
				system("pause");
				system("cls");
		}
	} while (1);
	return 0;
}