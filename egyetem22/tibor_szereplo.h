#pragma once
#include "szereplo.h"
class tibor_szereplo :public szereplo
{
public:
	tibor_szereplo(int x, int y) : szereplo(x, y, 'T') {

	}

	virtual void szamit() {
		this->x++;
		if (x > 70) {
			x = 0;
		}
		this->y--;
		if (y < 1) {
			y = 20;
		}

	}
};

