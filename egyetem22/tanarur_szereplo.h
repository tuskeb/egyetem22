#pragma once
#include "szereplo.h"

class tanarur_szereplo: public szereplo
{
	virtual void szamit() {
		this->x++;
		if (x > 70) {
			x = 1;
		}
	}
};

