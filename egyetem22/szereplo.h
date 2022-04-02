#pragma once
#include "szereplo.h"
#include "display.h"

class szereplo {

private:
	void torol() {
		display::draw(x, y, ' ');
	}


protected:

	char c;
	int x, y;

	virtual void szamit() {

	}

	virtual bool vege() {
		return false;
	}


public:

	szereplo(int x, int y, char c) {
		this->x = x;
		this->y = y;
		this->c = c;
		//cout << "Konstruktor";
	}


	void rajzol() {
		torol();
		szamit();
		display::draw(x, y, c);
		//cout << *this;
	}

	friend ostream& operator<<(ostream& stream, szereplo& obj) {
		stream << "[" << obj.x << ", " << obj.y << "]";
		return stream;
	}

	~szereplo() {
		//cout << "Destruktor";
	}

	bool utkozike(const szereplo & masik) {
		return this->x == masik.x && this->y == masik.y;
	}

};

