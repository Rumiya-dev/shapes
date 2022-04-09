#include "square.h"

square::square(std::string name, double dim) :
	shape(name)

{

	this->dim = dim;


}


double square::area() {
	return this->dim * this->dim;
}

double square::perimeter() {
	return (2 * this->dim) + (2 * this->dim);

};


