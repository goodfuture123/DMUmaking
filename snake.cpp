#include "snake.h"
#include <conio.h>
#include "tools.h"
#include <iostream>

void Snake::InitSnake()
{
    int i = 1;
	for (auto& point : snake)
	{
        if (i % 3 == 1)
        {
            point.PrintCircular();
        }
        else if (i % 3 == 2)
        {
            point.PrintCircular1();
        }
        else if (i%3==0)
        {
            point.PrintCircular2();
        }
        ++i;
	}
}
void Snake::Move()
{
	switch (direction)
	{
	case Direction::UP:
		snake.emplace_back(Point(snake.back().GetX(),snake.back().GetY()-1));
		break;
    case Direction::DOWN:
        snake.emplace_back(Point(snake.back().GetX(), snake.back().GetY() + 1));
        break;
    case Direction::LEFT:
        snake.emplace_back(Point(snake.back().GetX() - 1, snake.back().GetY()));
        break;
    case Direction::RIGHT:
        snake.emplace_back(Point(snake.back().GetX() + 1, snake.back().GetY()));
        break;
    default:
        break;
	}
    SetColor(14);
    int i = 1;
    for (auto& point : snake)
    {
        if (i % 3 == 1)
        {
            point.PrintCircular();
        }
        else if (i % 3 == 2)
        {
            point.PrintCircular1();
        }
        else if (i % 3 == 0)
        {
            point.PrintCircular2();
        }
        ++i;
    }
    //snake.back().PrintCircular();
}
void Snake::NormalMove()
{
    Move();
    snake.front().Clear();
    snake.pop_front();
}
bool Snake::OverEdge()
{
    return snake.back().GetX() < 30 &&
        snake.back().GetY() < 30 &&
        snake.back().GetX() > 1 &&
        snake.back().GetY() > 1;
}
bool Snake::HitItself()
{
    std::deque<Point>::size_type cnt = 1;
    Point* head = new Point(snake.back().GetX(), snake.back().GetY());
    for (auto& point : snake)
    {
        if (!(point == *head))
        {
            ++cnt;
        }
        else
            break;
    }
    delete head;
    if (cnt == snake.size())
        return true;
    else
        return false;
}
bool Snake::ChangeDirection()
{
    char ch;
    if (_kbhit())//kbhit函数返回值为两个，需注意
    {
        ch = _getch();
        switch (ch)
        {
        case -32:
            ch = _getch();
            switch (ch)
            {
            case 72:
                if (direction != Direction::DOWN)//如果方向与当前运动方向相反，无效
                    direction = Direction::UP;
                break;
            case 80:
                if (direction != Direction::UP)
                    direction = Direction::DOWN;
                break;
            case 75:
                if (direction != Direction::RIGHT)
                    direction = Direction::LEFT;
                break;
            case 77:
                if (direction != Direction::LEFT)
                    direction = Direction::RIGHT;
                break;
            default:
                break;
            }
            return true;

        case 27://ESC
            return false;

        default:
            return true;

        }
    }
    return true;
}
bool Snake::GetFood(const Food& cfood)
{
    if (snake.back().GetX() == cfood.x && snake.back().GetY() == cfood.y)
        return true;
    else
        return false;

}
bool Snake::GetBigFood(Food& cfood)
{
    if (snake.back().GetX() == cfood.big_x && snake.back().GetY() == cfood.big_y)
    {
        cfood.big_flag = false;
        cfood.big_x = 0;
        cfood.big_y = 0;
        SetCursorPosition(1, 0);
        std::cout << "                                                            ";
        return true;
    }
    else
        return false;
}