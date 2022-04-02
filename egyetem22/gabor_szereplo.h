#pragma once
#include "szereplo.h"

class gabor_szereplo: public szereplo
{
public:
	gabor_szereplo(int x, int y): szereplo(x,y, 'g') {

	}
	virtual void szamit() {
		this->x++;
		if (x<71)
		{
			x = 1;
		}
	}
};  

