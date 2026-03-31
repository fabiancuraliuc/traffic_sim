#ifndef VEHICLE_H
#define VEHICLE_H

#include "Map.h"

class Vehicle {
protected:
    int x, y;

public:
    virtual void moveLeft(Map& map) = 0;
    virtual void moveRight(Map& map) = 0;
    virtual void moveUp(Map& map) = 0;
    virtual void moveDown(Map& map) = 0;

    virtual int getX() = 0;
    virtual int getY() = 0;

    virtual ~Vehicle() {}
};

#endif