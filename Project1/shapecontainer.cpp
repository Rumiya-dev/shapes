#include "shapecontainer.h"
#include <iostream>
#include "circle.h"

shapecontainer::shapecontainer() {

}

shapecontainer::~shapecontainer() {
	std::cout << "Shapecontainder desctructor:\n";
	for (int i = 0; i < col.size(); i++)
		delete col[i];

	col.clear();
}

std::string shapecontainer::getName()
{
	return this->name = name;
}

void shapecontainer::add_circle(std::string name, double x) {
	col.push_back(new circle(name, x));
}

void shapecontainer::add_ellipse(std::string name, double x1, double y1) {
	col.push_back(new ellipse(name, x1, y1));
}

void shapecontainer::add_rectangle(std::string name, double x2, double y2) {
	col.push_back(new rectangle(name, x2, y2));
}

void shapecontainer::add_square(std::string name, double y3) {
	col.push_back(new square(name, y3));
}


void shapecontainer::report()
{


	// Print info about objects stored in col
	// for int i = 0; i < col.size()......
	for (int i = 0; i < col.size(); i++)
	{
		//std::ostream&(std::ostream&& )
		//std::ostream&(col[i]->area());

		//std::ostream& operator << (std::ostream & os, const shapecontainer & p);

		//std::cout << col[i]->area() << std::endl;
		//shapecontainer* col = new col[i];
		//std::ostream& operator<< (std::ostream & out, const shapecontainer & shapecontainerObj);    //<< col[i].add_square() << endl;
		//std::cout << col[i]->area();
		//std::cout << col[i]->perimeter();

		std::cout << col[i]->area() << std::endl;
		std::cout << col[i]->perimeter() << std::endl;
		std::cout << "Area: " << col[i]->area() << std::endl;
		std::cout << "Perimeter: " << col[i]->perimeter() << std::endl;
		//std::cout << col[i]->getName();


	}

}
