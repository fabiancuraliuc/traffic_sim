#include "GameEngine.h"
#include <iostream>
#include <unistd.h>

using namespace std;

GameEngine::GameEngine() {
    running = true;
}

void GameEngine::run() {
    while (running) {
        handleInput();
        update();
        render();
        usleep(150000);
    }
}

void GameEngine::handleInput() {
    char input;
    cin >> input;

    if (input == 'a') player.moveLeft(map);
    if (input == 'd') player.moveRight(map);
    if (input == 'w') player.moveUp(map);
    if (input == 's') player.moveDown(map);
}

void GameEngine::update() {
    // momentan gol
}

void GameEngine::render() {
    system("clear");
    map.render(player);
}