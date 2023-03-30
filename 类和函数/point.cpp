#pragma once
#include<iostream>
using namespace std;

#include"point.h"

Point::Point(int x, int y) {
	m_x = x;
	m_y = y;
}

int Point::get_x() {
	return m_x;
}

int Point::get_y() {
	return m_y;
}