#include "circle.h"

#include <string>
circle::circle(std::string name, double r) :
	shape(name) {

	this->r = r;
}

double circle::area() {
	return this->r * this->r * M_PI;
};

double circle::perimeter() {
	return (2 * this->r) * M_PI;
}



