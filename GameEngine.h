#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "Map.h"
#include "Player.h"

class GameEngine {
private:
    bool running;
    Map map;
    Player player;

public:
    GameEngine();
    void run();

private:
    void handleInput();
    void update();
    void render();
};

#endif