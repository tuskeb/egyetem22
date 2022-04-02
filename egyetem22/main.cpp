#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <Windows.h>
#include "szereplo.h"
#include "dora_szereplo.h"
#include "tibor_szereplo.h"
#include "tanarur_szereplo.h"
#include "kristof_szereplo.h"
#include "dani_szereplo.h"
#include "gabor_szereplo.h"

using namespace std;

int main() {
	int db = 10;

	szereplo** szereplok = new szereplo*[db];
	for (int i = 0; i < db; i++) {
		szereplok[i] = NULL;
		//cout << *szereplok[i] << endl;
	}
	szereplok[0] = new tibor_szereplo(2,5);
	szereplok[1] = new tanarur_szereplo(5, 5);
	szereplok[2] = new kristof_szereplo(10, 5);
	szereplok[3] = new dora_szereplo(15, 5);
	szereplok[4] = new dani_szereplo(20, 5);
	//szereplok[5] = new szereplo(25, 5);
	//szereplok[6] = new szereplo(30, 5);
	//szereplok[7] = new szereplo(35, 5);

	while(!GetKeyState(VK_F10)) {
		for (int i = 0; i < db; i++) {
			if (szereplok[i] != NULL) {
				szereplok[i]->rajzol();
			}
		}
		std::this_thread::sleep_for(160ms);
	}
	
	for (int i = 0; i < db; i++) {
		delete szereplok[i];
	}
	delete szereplok;

}