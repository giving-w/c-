#pragma once
#include<iostream>
#include<cmath>
using namespace std;

#include "circle.h"
#include"point.h"

void is_circle(Point &p, Circle &c) {
	int x = pow(p.get_x() - c.get_m_center().get_x(), 2);
	int y = pow(p.get_y() - c.get_m_center().get_y(), 2);
	double ret = sqrt(x * x + y * y);
	if (ret > c.get_r()) {
		cout << "the point is out of circle" << endl;
	}
	else if (ret == c.get_r()) {
		cout << "the point is on circle" << endl;
	}
	else {
		cout << "the point is in circle" << endl;
	}
}

