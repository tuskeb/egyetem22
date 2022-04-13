#pragma once
#include "szereplo.h"
#include "display.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
class help :public szereplo
{
public:
	
	help(int x, int y) : szereplo(x, y, ' ') {
	}



	virtual void szamit() {
		
		cout << "Egy jatekos eseten a nyilakkal iranyitsd a babut /D/"<<endl
			<<"Ket jatekos eseten a masodik jatekost a WASD betukkel iranytsd es lojj a Q-val /X/";
	}


};

