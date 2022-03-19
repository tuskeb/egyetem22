#include <iostream>
#include <fstream>
#include <Windows.h>
#include <thread>
#include <chrono>

using namespace std;

class display {
public:
	static void draw(int x, int y, char c) {		
		COORD pos = { x, y };
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(output, pos);
		cout << c;
	}

	/*
	static int getWidth() {
	}
	*/
};



class szereplo {

public:
	int x, y;
	char c;
	szereplo(int x, int y, char c) {
		this->x = x;
		this->y = y;
		this->c = c;
		cout << "Konstruktor";
	}

	~szereplo() {
		cout << "Destruktor";
	}

	void jobbra() {
		torol();
		x++;
		if (x > 79) {
			x = 0;
		}
		rajzol();
	}

	void torol() {
		display::draw(x, y, ' ');
	}

	void rajzol() {
		display::draw(x, y, c);
		cout << *this;
	}

	friend ostream& operator<<(ostream & stream, szereplo & obj) {
		stream << "[" << obj.x << ", " << obj.y << "]";		
		return stream;
	}

};



int main() {
	int db = 10;

	szereplo** szereplok = new szereplo*[db];
	for (int i = 0; i < db; i++) {
		szereplok[i] = new szereplo(i, i, 'x');
		cout << *szereplok[i] << endl;
	}
	
	while(!GetKeyState(VK_RETURN)) {
		for (int i = 0; i < db; i++) {
			szereplok[i]->jobbra();
		}
		std::this_thread::sleep_for(16ms);
	}
	
	for (int i = 0; i < db; i++) {
		delete szereplok[i];
	}
	delete szereplok;

}