#pragma once

#include "shape.h"
#include <string>

class square : public shape {
public:
	square(std::string name, double dim);
	double area();
	double perimeter();
private:
	double dim;

};