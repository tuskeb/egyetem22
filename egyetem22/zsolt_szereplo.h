#pragma once
#include "szereplo.h"
#include "display.h"//jobbr�l balra
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
class zsolt_szereplo :public szereplo
{
public:
	zsolt_szereplo(int x, int y) : szereplo(x, y, 'Z') {

	}
	virtual void szamit() {
		this->x = x++;
		if (x > 70) x = 0;
		this->y = y;
		if (y > 20) y = 0;
	}

	balramegyunk() {
	srand(time(0));
	double y = rand() % 50;

	x--;
	if (x > 70) {
		x = 0;
	} //vissza 0ra ha el�ri a 70et

}

		//v�ge f�ggv�ny- veg�n ha el�rt jobbra akkor ad igazat
};

