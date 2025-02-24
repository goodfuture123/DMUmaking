#ifndef SNAKE_H
#define SNAKE_H
#include <deque>
#include "points.h"
#include "food.h"
class Food;
class Snake
{
    friend class Food;
public:
    enum Direction { UP, DOWN, LEFT, RIGHT };
    Snake() {
        snake.emplace_back(14, 8);
        snake.emplace_back(15, 8);
        snake.emplace_back(16, 8);
        direction = Direction::DOWN;
    }
    void InitSnake();
    void Move();
    void NormalMove();
    bool OverEdge();
    bool HitItself();
    bool ChangeDirection();
    bool GetFood(const Food&);
    bool GetBigFood(Food&);

private:
    std::deque<Point> snake;
    Direction direction;
};


#endif // ! SNAKE_H

