#pragma once
#include "szereplo.h"
#include "display.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
class visszaszamlal :public szereplo
{
public:
	int tavolsag = 1000000;
	visszaszamlal(int x, int y) : szereplo(x, y, ' ') {
	}


	int tav(int tavlosag) {
		return tavolsag;
	}

	virtual void szamit() {
		tavolsag = tavolsag - 10;
		cout << "A Halalcsillag tavolsaga: " << tavolsag << " meter";
	}


};

