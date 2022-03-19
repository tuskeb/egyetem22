#pragma once
#include "szereplo.h"
class kristof_szereplo : public szereplo
{
	virtual void szamit() {
		this->y++;
		if (y > 50) {
			y = 0;
		}
	}
};

