#include "Player.h"

Player::Player() {
    x = 10;
    y = 3;
    dir = RIGHT;
}

int Player::getX() { return x; }
int Player::getY() { return y; }
Direction Player::getDir() { return dir; }

void Player::moveLeft(Map& map) {
    dir = LEFT;
    if (map.isWalkable(x - 1, y)) x--;
}

void Player::moveRight(Map& map) {
    dir = RIGHT;
    if (map.isWalkable(x + 1, y)) x++;
}

void Player::moveUp(Map& map) {
    dir = UP;
    if (map.isWalkable(x, y - 1)) y--;
}

void Player::moveDown(Map& map) {
    dir = DOWN;
    if (map.isWalkable(x, y + 1)) y++;
}