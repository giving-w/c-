#include"text.h"

int main() {
	Peobook pb;
	int choice;

	do {
		menu();
		cin >> choice;
		switch (choice) {
			case 1://增加联系人
				addPeo(&pb);
				system("pause");
				system("cls");
				break;
			case 2://显示联系人
				lookPeo(&pb);
				system("pause");
				system("cls");
				break;
			case 3://删除联系人
				delPeo(&pb);
				system("pause");
				system("cls");
				break;
			case 4://查找联系人
				seePeo(&pb);
				system("pause");
				system("cls");
				break;
			case 5://修改联系人
				revPeo(&pb);
				system("pause");
				system("cls");
				break;
			case 6://清空联系人
				clsPeo(&pb);
				system("pause");
				system("cls");
				break;
			case 0://退出
				cout << "欢迎下次使用！" << endl;
				system("pause");
				return 0;
			default:
				cout << "输入错误，请重新输入：" << endl;
				system("pause");
				system("cls");
		}
	} while (1);
	return 0;
}