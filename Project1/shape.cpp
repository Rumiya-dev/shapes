#include "shape.h"

shape::shape(std::string name) {
	this->name = name;
}

std::string shape::getName() {
	return this->name;
}

double shape::area() {
	return 0;
}

double shape::perimeter() {
	return 0;
}