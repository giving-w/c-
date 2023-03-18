#include<iostream>
#include<string>
#include<vector>
#define MAX 1000
using namespace std;

struct people {
	string name;
	int age;
	int sex;
	string number;
	string address;
};

struct Peobook {
	people p[MAX];
	int sz = 0;
};

void menu();
void addPeo(Peobook* pb);
void seePeo(Peobook* pb);
void lookPeo(Peobook* pb);
void delPeo(Peobook* pb);
void revPeo(Peobook* pb);
void clsPeo(Peobook* pb);