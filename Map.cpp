#include "Map.h"
#include "Player.h"
#include <iostream>

using namespace std;
Map::Map() {

    vector<string> base = {
"########################################################",
"#========++========++========++========++============#",
"#                                                      #",   // banda sus
"# - - - - - - - -  - - - - - - - - - - - - - - - -     #",
"#                                                      #",   // banda jos
"#========++========++========++========++============#",
"########################################################"
    };

    for (int i = 0; i < base.size(); i++) {

        string row = base[i];

        if (i == 0 || i == base.size() - 1) {
            grid.push_back(row + row + row);
        }
        else {
            string middle = row.substr(1, row.size() - 2);
            string newRow = "#" + middle + middle + middle + "#";
            grid.push_back(newRow);
        }
    }
}


bool Map::isWalkable(int x, int y) {

    if (y < 0 || y >= grid.size()) return false;
    if (x < 0 || x >= grid[y].size()) return false;

    char tile = grid[y][x];

    // zid
    if (tile == '#') return false;

    // ATENTIONARE bordura (=)
    if (tile == '=') {
        cout << "ATENTIE: Ai iesit de pe carosabil!\n";
    }

    return true;
}

void Map::render(Player& player) {

    for (int y = 0; y < grid.size(); y++) {
        for (int x = 0; x < grid[y].size(); x++) {

            int px = player.getX();
            int py = player.getY();

            if (x == px && y == py) {

                switch(player.getDir()) {
                    case UP: cout << "^"; break;
                    case DOWN: cout << "v"; break;
                    case LEFT: cout << "<"; break;
                    case RIGHT: cout << ">"; break;
                }

            } else {
                cout << grid[y][x];
            }
        }
        cout << endl;
    }
}