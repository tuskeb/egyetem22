#pragma once
#include "szereplo.h" 
#include <time.h>
#include <stdio.h>    
#include <stdlib.h>
//#include "lovedek.h" 
#include "szereplo.h"
#include "listakezeles.h"


class xszarnyu :public szereplo
{
public:
	xszarnyu(int x, int y) : szereplo(x, y, 'X') {
		this->x = x;
		this->y = y;
	}
	int lep = 0;
	virtual void szamit() {
		

	}

	virtual void fel() {
		torol();
		y--;
		rajzol();
	}

};
