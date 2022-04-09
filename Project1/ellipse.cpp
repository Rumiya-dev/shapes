#include "ellipse.h"


ellipse::ellipse(std::string name, double a, double b) :
	shape(name) {

	this->a = a;
	this->b = b;

}

double ellipse::area() {
	return this->a * this->b * M_PI;
};

double ellipse::perimeter() {
	return 4 * ((M_PI * a * b + ((a - b) * (a - b)) / (a + b)));
}