#include "rectangle.h"

rectangle::rectangle(std::string name, double w, double h) :
	shape(name) {
	this->width = w;
	this->height = h;
}

double rectangle::area() {
	return this->height * this->width;
}

double rectangle::perimeter() {
	return (2 * this->width) + (2 * this->height);
}