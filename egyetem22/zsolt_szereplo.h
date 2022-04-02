#pragma once
#include "szereplo.h" //jobbról balra
class zsolt_szereplo :public szereplo
{
public:
	zsolt_szereplo(int x, int y) : szereplo(x, y, 'Z') {

	}
	virtual void szamit() {
		this->x = x + 6;
		if (x > 50)x = 0;
		this->y = y--;
		if (y < 1) y = 47;
	}
};

