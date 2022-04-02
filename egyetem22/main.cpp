#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <Windows.h>
#include "szereplo.h"
#include "dora_szereplo.h"
#include "tibor_szereplo.h"
#include "tanarur_szereplo.h"

using namespace std;

int main() {
	int db = 10;

	szereplo** szereplok = new szereplo*[db];
	for (int i = 0; i < db; i++) {
		szereplok[i] = NULL;
		//cout << *szereplok[i] << endl;
	}
	szereplok[0] = new tibor_szereplo(2,5,'T');
	szereplok[1] = new tanarur_szereplo(2, 5, 'U');
	
	while(GetKeyState(VK_RETURN)) {
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