#pragma once
#include "szereplo.h"
#include "display.h"

#define TAG_nemdefinialt 1
#define TAG_ellenseg 1
#define TAG_jatekos 2
#define TAG_lovedek 3

class szereplo {

protected:
	void torol() {
		display::draw(x, y, ' ');
	}

	char c;
	int x, y;

	virtual void szamit() {

	}


public:
	int tag = TAG_nemdefinialt;

	szereplo(int x, int y, char c) {
		this->x = x;
		this->y = y;
		this->c = c;
		//cout << "Konstruktor";
	}

	int xvissza() {
		return x;
	}
	int yvissza() {
		return y;
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
		torol();
		//cout << "Destruktor";
	}

	bool utkozike(const szereplo & masik) {
		return this->x == masik.x && this->y == masik.y;
	}
	virtual bool end() {
		return false;
	}

	virtual bool vege() {
		return false;
	}
	virtual int lepes() {
		return 0;
	}
};

