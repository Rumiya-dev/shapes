#pragma once
#include "shape.h"
#include <string>

class rectangle : public shape {
public:
	rectangle(std::string name, double w, double h);
	double area();
	double perimeter();
private:
	double width;
	double height;
};