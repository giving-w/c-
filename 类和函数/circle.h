#pragma once
#include<iostream>
using namespace std;

#include"point.h"

class Circle {
public:
	Circle(Point center, int r);
	int get_r();
	Point get_m_center();
private:
	Point m_center;
	int m_r;
};