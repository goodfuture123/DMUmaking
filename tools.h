#ifndef  TOOLS_H
#define TOOLS_H
//Tools工具类主要是用于设置光标的位置以及输出文字的颜色

void SetWindowSize(int cols, int lines);
void SetCursorPosition(const int x, const int y);
void SetColor(int colorID);
void SetBackColor();

#endif // ! TOOLS_H

