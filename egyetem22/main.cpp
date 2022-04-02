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
#include "zsolt_szereplo.h"
#include "listakezeles.h"

using namespace std;

int main() {

	szereplo* t;
	szereplo* x;
	listakezeles<szereplo*> szereplok(200);
	szereplok.hozzaad(new tibor_szereplo(2, 5));
	szereplok.hozzaad(t = new tanarur_szereplo(5, 5));
	szereplok.hozzaad(x = new kristof_szereplo(5, 5));
	szereplok.hozzaad(new dora_szereplo(15, 5));
	szereplok.hozzaad(new dani_szereplo(20, 5));
	szereplok.hozzaad(new zsolt_szereplo(25, 5));
	szereplok.hozzaad(new gabor_szereplo(30, 5));
	//cout << boolalpha << t->utkozike(*x) << endl;
	
	szereplok.eltavolitertek(t);

	while (!GetKeyState(VK_F10)) {
		for (int i = 0; i < szereplok.elemszam(); i++) {
			szereplok[i]->rajzol();
		}
		std::this_thread::sleep_for(160ms);
	}

	while (szereplok.elemszam() > 0) {
		delete szereplok.eltavolit(0);
	}
	
}