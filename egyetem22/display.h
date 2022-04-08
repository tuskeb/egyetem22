#pragma once
#include <Windows.h>
#include <iostream>
#include "display.h"
using namespace std;


class display {
public:
	static void draw(int x, int y, char c) {
		COORD pos = { x, y };
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(output, pos);
		cout << c;
	}
	static void end(int x, int y,string c) {
		COORD pos = { x,y };
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(output, pos);
		cout << c;
	}

	/*
	static int getWidth() {
	}
	*/
};
