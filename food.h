#ifndef FOOD_H
#define FOOD_H
#include"points.h"
#include"snake.h"
class Snake;
class Food
{
	friend class Snake;
public:
	Food():cnt(0),flash_flag(false),big_flag(false),x(0),y(0),big_x(0),big_y(0),progress_bar(0) {}
	void DrawFood(Snake& csnake);
	void DrawBigFood(Snake& csnake);
	int GetCnt();
	void FlashBigFood();
	bool GetBigFlag();
	int GetProgressBar();

private:
	int cnt;
	bool flash_flag;
	bool big_flag;
	int x, y;
	int big_x, big_y;
	int progress_bar;
	
};

#endif // !FOOD_H

