#include "main.h"
// Do not modify main.cpp

int main()
{
    // Do not modify main.cpp
    {
        shapecontainer collection;
        collection.add_circle("Circle", 10);
        collection.add_ellipse("Ellipse", 20, 10);
        collection.add_rectangle("Rectangle", 2, 20);
        collection.add_square("Square", 20);
        collection.report();
    }
    std::cout << "*****************************" << std::endl;
    {
        shapecontainer collection;
        collection.add_circle("Circle01", 2);
        collection.add_ellipse("Ellipse02", 2, 2);
        collection.add_rectangle("Rectangle03", 2, 2);
        collection.add_square("Square04", 2);
        collection.report();
    }
    return 0;
}