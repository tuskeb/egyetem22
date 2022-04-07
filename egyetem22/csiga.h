#pragma once
#include "szereplo.h" // csiga
#include <time.h>
#include <stdio.h>    
#include <stdlib.h>
class csiga :public szereplo
{
public:
	csiga(int x, int y) : szereplo(x, y, 'D') {
		this->x = x;
		this->y = y;
	}
	
	virtual void szamit() {
		if (GetAsyncKeyState(VK_RIGHT)) {
			x = x++;
		}
		if (GetAsyncKeyState(VK_DOWN)) {
			y = y++;
		}
		if (GetAsyncKeyState(VK_UP)) {
			y = y--;
		}
		if (GetAsyncKeyState(VK_LEFT)) {
			x = x--;
		}
		if (*&y==1)
		{
			cout << "nyertel" << endl;
		}

	}
	
};
