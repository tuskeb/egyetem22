#pragma once
#include "szereplo.h"
class dani_szereplo: public szereplo
{
public:
	dani_szereplo(int x, int y) : szereplo(x, y, 'O') {

	}

	virtual void szamit() {
		this->x++;
		if (x > 19) { x = 1; }
	}
};

