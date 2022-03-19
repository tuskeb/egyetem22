#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <Windows.h>
#include "szereplo.h"

using namespace std;

int main() {
	int db = 10;

	szereplo** szereplok = new szereplo*[db];
	for (int i = 0; i < db; i++) {
		szereplok[i] = new szereplo(i, i, 'x');
		//cout << *szereplok[i] << endl;
	}
	
	while(!GetKeyState(VK_RETURN)) {
		for (int i = 0; i < db; i++) {
			szereplok[i]->rajzol();
		}
		std::this_thread::sleep_for(16ms);
	}
	
	for (int i = 0; i < db; i++) {
		delete szereplok[i];
	}
	delete szereplok;

}