#pragma once
#include "szereplo.h"
#include "display.h"//jobbról balra
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
	} //vissza 0ra ha eléri a 70et

}

		//vége függvény- vegén ha elért jobbra akkor ad igazat
};

