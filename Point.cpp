//
// Created by FD on 06.03.2017.
//

#include "Point.h"

int Point::mCounter = 0;

Point::Point() {
    mCounter++;
    mX = 0;
    mY = 0;
    mZ = 0;
}

Point::Point(float x, float y, float z) : Point() {
    mX = x;
    mY = y;
    mZ = z;
}

void Point::setX(float x) {
    mX = x;
}

void Point::setY(float y) {
    mY = y;
}

void Point::setZ(float z) {
    mZ = z;
}

Point Point::operator+(Point other){
    return Point(mX + other.getX(), mY + other.getY(), mZ + other.getZ());
}

Point Point::operator-(Point other){
    return Point(mX - other.mX, mY - other.mY, mZ - other.mZ);
}

bool Point::operator==(Point other){
    return (mX == other.mX) && (mY == other.mY) &&  (mZ == other.mZ);
}
void Point::operator=(Point point){
    if(this == &point){
        return;
    }
    this->setX(point.mX);
    this->setY(point.mY);
    this->setZ(point.mZ);
}

