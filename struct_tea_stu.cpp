#include<iostream>
#include<string>
using namespace std;

struct student {
	string sname;
	int score;
};

struct teacher {
	string tname;
	student array[5];
};

void getin(teacher* t) {
	for (int i = 0; i < 3; i++) {
		cout << "the teacher's name is ";
		cin >> t->tname;
	
		for (int j = 0; j < 5; j++) {
			cout << "the " << j + 1 << " student's name is ";
			cin >> t->array[j].sname;
			cout << " the student's score is ";
			cin >> t->array[j].score;
		}
		t++;
	}
}

void put(const teacher* t) {
	for (int i = 0; i < 3; i++) {
		cout << "the teacher's name is " << t->tname << endl;
		for (int j = 0; j < 5; j++) {
			cout << "the " << j + 1 << " student's name is " << t->array[j].sname << " the score is " << t->array[j].score << endl;
		}
		t++;
	}
}

int main() {
	teacher t[3];
	getin(t);
	put(t);
}