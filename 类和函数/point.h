#pragma once
#include<iostream>
using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0);
	int get_x();
	int get_y();
private:
	int m_x;
	int m_y;
};