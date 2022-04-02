#pragma once
#include "szereplo.h"
class dani_szereplo: public szereplo
{
	virtual void szamit() {
		this->x++;
		if (x > 19) { x = 1; }
	}
};

