#include"points.h"
#include"tools.h"
#include<iostream>


void Point::Print()
{
	SetCursorPosition(x, y);
	std::cout << "��";
}

void Point::PrintCircular()
{
	SetCursorPosition(x, y);
	std::cout << "��";
}

void Point::PrintCircular1()
{
	SetCursorPosition(x, y);
	std::cout << "˼";
}

void Point::PrintCircular2()
{
	SetCursorPosition(x, y);
	std::cout << "ŵ";
}

void Point::Clear()
{
	SetCursorPosition(x, y);
	std::cout << "  ";
}
void Point::ChangePosition(const int x, const int y)
{
	this->x = x;
	this->y = y;
}