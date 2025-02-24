#ifndef POINT_H
#define POINT_H
//Point类设置点的对象
class Point
{
public:
	Point() {}
	Point(const int x, const int y) :x(x), y(y) {}
	void Print();
	void PrintCircular();
	void PrintCircular1();
	void PrintCircular2();
	void Clear();
	void ChangePosition(const int x,const int y);
	bool operator==(const Point& point) { return (point.x == this->x) && (point.y == this->y); }
	int GetX() { return this->x; }
	int GetY() { return this->y; }
private:
	int x, y;
};


#endif // !POINT_H

