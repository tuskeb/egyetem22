#pragma once
#include "szereplo.h"
#include "display.h"//jobbról balra
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
class jobbrolbalra :public szereplo
{
public:
	jobbrolbalra(int x, int y) : szereplo(x, y, 'Z') {
	}

	jobbrolbalra(int y) : szereplo(70, y, 'Z') {
		
	}

	virtual void szamit() {
		tag = TAG_ellenseg;
		if (x > 0) { this->x = x--; }
		if (x <= 1) { this->x = x = 70; }
	}

	virtual bool vege() {
		return x == 0;
	}
};

