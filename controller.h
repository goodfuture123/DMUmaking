#ifndef CONTROOLER_H
#define CONTROOLER_H

#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "tools.h"
#include "startinterface.h"
#include "map.h"
#include "snake.h"
#include "food.h"

class Controller
{
    public:
    Controller() : speed(200), key(1), score(0) {}
    void Start();
    void Selcet();
    void DrawGame();
    int PlayGame();
    void UpdateScore(const int &);
    void RewriteScore();
    int Menu();
    void Game();
    int GameOver();

private:
    int speed;
    int key;
    int score;
};


#endif // !CONTROOLER_H

