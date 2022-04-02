#pragma once
#include "szereplo.h"

class tanarur_szereplo: public szereplo
{
public:
	tanarur_szereplo(int x, int y) : szereplo(x, y, 'U') {

	}

	virtual void szamit() {
		this->x++;
		if (x > 70) {
			x = 1;
		}
	}
};

