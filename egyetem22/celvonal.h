#pragma once
#include "szereplo.h"
#include "display.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
class celvonal : public szereplo {
public:
	celvonal(int x, int y) : szereplo (x, y, ' ') {
		this->x = x;
		this->y = y;
	}
};