#pragma once
#include "shape.h"
#include <string>
#define M_PI 3.14

class circle : public shape {
public:
	circle(std::string name, double r);
	double area();
	double perimeter();
	friend   class shapecontainer;
private:

	double r;
};