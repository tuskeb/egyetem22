#pragma once
#include "szereplo.h" // csiga
#include <time.h>
#include <stdio.h>    
#include <stdlib.h>
class dora_szereplo :public szereplo
{
public:
	dora_szereplo(int x, int y) : szereplo(x, y, 'D') {
		srand(time(0));
		this->x = rand()%70+1;
		this->y = 21;
	}
	virtual void szamit() {
		if (GetAsyncKeyState(VK_RIGHT)) {
			x = x++;
		}
		if (GetAsyncKeyState(VK_DOWN)) {
			y = y++;
		}
		if (GetAsyncKeyState(VK_UP)) {
			y = y--;
		}
		if (GetAsyncKeyState(VK_LEFT)) {
			x = x--;
		}

	}
};
