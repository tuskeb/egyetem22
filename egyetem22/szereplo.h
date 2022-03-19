#pragma once
#include "szereplo.h"
#include "display.h"

class szereplo {
private:
	void torol() {
		display::draw(x, y, ' ');
	}

public:
	int x, y;
	char c;
	szereplo(int x, int y, char c) {
		this->x = x;
		this->y = y;
		this->c = c;
		//cout << "Konstruktor";
	}

	~szereplo() {
		//cout << "Destruktor";
	}

	void rajzol() {
		torol();
		szamit();
		display::draw(x, y, c);
		//cout << *this;
	}

	virtual void szamit() {

	}


	friend ostream& operator<<(ostream& stream, szereplo& obj) {
		stream << "[" << obj.x << ", " << obj.y << "]";
		return stream;
	}

};

