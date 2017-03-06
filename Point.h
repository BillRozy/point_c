//
// Created by FD on 06.03.2017.
//

#ifndef OVERLOADING_POINT_H
#define OVERLOADING_POINT_H


#include <c++/ostream>

class Point {
private:
    static int mCounter;
    float mX, mY, mZ;
public:
    Point();
    Point(float x, float y, float z);
    void setX(float x);
    void setY(float y);
    void setZ(float z);
    inline float getX(){
        return mX;
    }
    inline float getY(){
        return mY;
    }
    inline float getZ(){
        return mZ;
    }
    inline static int getCounter(){
        return mCounter;
    }
    Point operator+(Point other);
    Point operator-(Point other);
    bool operator==(Point other);
    void operator=(Point point);
    friend std::ostream& operator<<(std::ostream& sm, Point point);
};


#endif //OVERLOADING_POINT_H
