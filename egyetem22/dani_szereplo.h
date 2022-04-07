#pragma once
#include "szereplo.h"
#include "display.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
class dani_szereplo: public szereplo
{
public:
	dani_szereplo(int x, int y) : szereplo(x, y, 'O') {

	}
	dani_szereplo(int y) : szereplo(0, y, 'O') {
	}

	virtual void szamit() {
		if (x < 70) { this->x = x += 3; }
	}
	virtual bool vege() { return x == 70; }
};

