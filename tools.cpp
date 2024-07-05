#include "tools.h"
#include <windows.h>
#include <stdio.h>
#include<stdlib.h>

void SetWindowSize(int cols, int lines)
{
	system("title ̰����");
	char cmd[30];
	sprintf_s(cmd, "mode conconls =%d lines=%d", cols * 2, lines);
	system(cmd);
}
void SetCursorPosition(const int x, const int y)
{
	COORD position;
	position.X = x * 2;
	position.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),position);
}
void SetColor(int colorID)//�����ı���ɫ
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorID);
}
void SetBackColor()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_BLUE |
		BACKGROUND_BLUE |
		BACKGROUND_GREEN |
		BACKGROUND_RED);
}