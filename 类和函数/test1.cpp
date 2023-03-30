#include<iostream>
#include<cstring>
using namespace std;

class Student {
private:
	string name;
	int age;
public:
	Student() :name(" "), age(0) {};
	Student(string _name, int _age) {
		name = _name;
		age = _age;
	}

	void Stuprint() {
		cout << "name is " << name << " age is " << age << endl;
	}
};

class Class {
private:
	int g, count;
	Student* s;
public:
	Class(int g = 0) {
		if (g == 0) {
			cout << "set the nianji: ";
			cin >> g;

			cout << "set the student number: ";
			cin >> count;
		}
		else {
			cout << "set the student number: ";
			cin >> count;
		}
		s = new Student[count];
		for (int i = 0; i < count; i++) {
			string name;
			int age;
			cout << "set the " << i + 1 << " name and age: ";
			cin >> name >> age;
			s[i] = Student(name, age);
		}
	}

	void StuPrint() {
		for (int i = 0; i < count; i++) {
			s[i].Stuprint();
			cout << endl;
		}
	}

	~Class() {
		delete[] s;
	}
};

int main() {
	Class C1(2022);
	C1.StuPrint();

	return 0;
}