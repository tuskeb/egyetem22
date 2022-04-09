#pragma once
#include "szereplo.h" // csiga
#include <time.h>
#include <stdio.h>    
#include <stdlib.h>
class csiga :public szereplo
{
public:
	csiga(int x, int y) : szereplo(x, y, 'D') {
		this->x = x;
		this->y = y;
		tag = TAG_jatekos;
	}
	int lep = 0;
	virtual void szamit() {
		if (GetAsyncKeyState(VK_RIGHT) && x < 71) {
			x = x++;
			lep++;
		}
		if (GetAsyncKeyState(VK_DOWN) && y < 9) {
			y = y++;
			lep++;
		}
		if (GetAsyncKeyState(VK_UP) && y > 0) {
			y = y--;
			lep++;
		}
		if (GetAsyncKeyState(VK_LEFT) && x > 0) {
			x = x--;
			lep++;
		}
	}
	int lepes() {
		return lep;
	}
	virtual bool end() {
		if(y ==0)return true;
	}

	virtual bool vege() {   //abban az esetben ha nem eszközölünk nehézségi szint növelést
		return y == 0;
	}
};
