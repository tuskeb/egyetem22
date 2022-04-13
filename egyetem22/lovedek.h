#pragma once
#include "szereplo.h"
#include "display.h"//jobbról balra
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
class lovedek:public szereplo
{
public:
	lovedek(int x, int y) : szereplo(x, y, '|') {
	}

	virtual void szamit() {
		y--;
		tag = TAG_lovedek;
	}

	virtual bool vege() {
		return y == 0;
	}
};

