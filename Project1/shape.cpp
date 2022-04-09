#pragma once
#include <string>

class shape {
public:
	shape(std::string name);
	virtual std::string getName();
	virtual double area();
	virtual double perimeter();
	std::string name;

};