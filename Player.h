#ifndef PLAYER_H
#define PLAYER_H

#include "Map.h"

enum Direction {UP, DOWN, LEFT, RIGHT};

class Player {
private:
    int x;
    int y;
    Direction dir;

public:
    Player();

    int getX();
    int getY();
    Direction getDir();

    void moveLeft(Map& map);
    void moveRight(Map& map);
    void moveUp(Map& map);
    void moveDown(Map& map);
};

#endif