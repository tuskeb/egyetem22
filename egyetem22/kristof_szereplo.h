#include "szereplo.h"
#pragma once
class kristof_szereplo :public szereplo
{
public:
	kristof_szereplo(int x, int y) : szereplo(x, y, 'K') {

	}
	virtual void szamit() {
		this->x = x + 6;
		if (x > 50)x = 0;
		this->y = y--;
		if (y < 1) y = 46;
	}
};

