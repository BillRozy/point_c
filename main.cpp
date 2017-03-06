#include <iostream>
#include "Point.h"

std::ostream& operator<<(std::ostream& sm, Point point){
    sm << "Point(" << point.getX() << " , " << point.getY() << " , " << point.getZ() << ");" << std::endl;
       return sm;
}

int main() {

    Point p1 = Point(3.5, 1, 20);
    Point p2 = p1 + p1;
    Point p3 = p1 - p2;
    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;
    std::cout << "p3: " << p3 << std::endl;
    std::cout << "Counter: " << Point::getCounter() << std::endl;

    return 0;
}