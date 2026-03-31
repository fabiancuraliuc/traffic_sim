#ifndef MAP_H
#define MAP_H

#include <vector>
#include <string>
using namespace std;

class Player;

class Map {
private:
    vector<string> grid;

public:
    Map();

    void render(Player& player);
    bool isWalkable(int x, int y);
};

#endif