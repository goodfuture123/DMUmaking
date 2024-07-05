#include<iostream>
#include<windows.h>
#include"tools.h"
#include"points.h"
#include"map.h"
#include"controller.h"
using namespace std;
void HideCursor() 
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = false; // 设置光标不可见
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}

int main()
{
    HideCursor();
	Controller ctl;
	ctl.Game();
	return 0;
}
