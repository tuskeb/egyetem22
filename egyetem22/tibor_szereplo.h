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
		if (GetAsyncKeyState(VK_NUMPAD6)) {
			x = x++;
		}
		if (GetAsyncKeyState(VK_NUMPAD2)) {
			y = y++;
		}
		if (GetAsyncKeyState(VK_NUMPAD8)) {
			y = y--;
		}
		if (GetAsyncKeyState(VK_NUMPAD4)) {
			x = x--;
		}

		if (GetAsyncKeyState(VK_NUMPAD9)) {
			cout << "|";

			/*listakezeles<szereplo*> lovedekek(200);
			szereplo* lov = new lovedek(x, y - 1);
			lovedekek.hozzaad(lov);*/
		}

	}
};
