#include<iostream>
using namespace std;

#include"circle.h"
#include"globe.h"
#include"point.h"

int main() {
	Point center(1, 1);
	Point p(2, 2);
	Circle c(center, 1);
	is_circle(p, c);

	return 0;
}