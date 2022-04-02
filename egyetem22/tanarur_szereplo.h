#pragma once
#include "szereplo.h"

class tanarur_szereplo: public szereplo
{
public:
	tanarur_szereplo(int x, int y, char c) : szereplo(x, y, c) {

	}

	virtual void szamit() {
		this->x++;
		if (x > 70) {
			x = 1;
		}
	}
};

