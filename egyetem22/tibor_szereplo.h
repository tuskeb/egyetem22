#pragma once
#include "szereplo.h"
class tibor_szereplo :public szereplo
{
	virtual void szamit() {
		this->x++;
		if (x > 70) {
			x = 0;
		}
		this->y--;
		if (y < 1) {
			y = 50;
		}

	}
};

