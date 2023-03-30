#pragma once
#include<iostream>
using namespace std;

#include"circle.h"
#include"point.h"

Circle::Circle(Point center, int r) {
	m_center = center;
	m_r = r;
}

int Circle::get_r() {
	return m_r;
}

Point Circle::get_m_center() {
	return m_center;
}