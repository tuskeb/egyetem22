#pragma once
#include "szereplo.h"
class dora_szereplo :public szereplo
{
public:
	dora_szereplo(int x, int y) : szereplo(x, y, 'D') {
		
	}
	virtual void szamit() {
		this->x = x + 3;
		if (x > 70)x = 0;
		this->y = y--;
		if (y < 1) y = 50;
	}
};
