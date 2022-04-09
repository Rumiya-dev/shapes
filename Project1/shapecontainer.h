#pragma once
#include "shape.h"
#include "square.h"
#include "ellipse.h"
#include "rectangle.h"
#include <vector>
#include <string>
#include "shape.h"

class shapecontainer {//:public shape {
public:
	shapecontainer();
	~shapecontainer();
	std::string name;
	std::string getName();

	void add_circle(std::string name, double x);
	void add_ellipse(std::string, double x1, double y1);
	void add_rectangle(std::string, double x2, double y2);
	void add_square(std::string, double y3);
	void report();

private:
	std::vector<shape*> col;
};
