#pragma once
#include "shape.h"
#include <string>
#define M_PI 3.14

class ellipse : public shape {
public:
	ellipse(std::string name, double a, double b);
	double area();
	double perimeter();
private:

	double a;
	double b;
};