#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <Windows.h>
#include "szereplo.h"
#include "csiga.h"
#include "tibor_szereplo.h"
#include "tanarur_szereplo.h"
#include "kristof_szereplo.h"
#include "dani_szereplo.h"
#include "gabor_szereplo.h"
#include "jobbrolbalra.h"
#include "listakezeles.h"

using namespace std;

int main() {
	listakezeles<szereplo*> szereplok(200);

	srand(time(0));

	szereplo* cs = new csiga(rand() % 70 + 1, 21);
	
	szereplok.hozzaad(cs);
	szereplok.hozzaad(new jobbrolbalra(rand() % 70 + 1,  2));

	while (!GetKeyState(VK_F10)) {
		for (int i = 0; i < szereplok.elemszam(); i++) {
			szereplok[i]->rajzol();
		}
	
		std::this_thread::sleep_for(160ms);

		for (int i = 0; i < szereplok.elemszam(); i++) {
			if (szereplok[i]->vege()) {
				delete szereplok.eltavolit(i);
				i--;
			}
			
		}
	}

	while (szereplok.elemszam() > 0) {
		delete szereplok.eltavolit(0);
	}
	
}