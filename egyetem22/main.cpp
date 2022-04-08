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
#include "celvonal.h"

using namespace std;

int main() {
	cout << "Udvozollek a PENCSIGA jatekban!";
	int x;
	do {
		display::end(0,1,"1 - Uj jatek");
		display::end(0,2,"2 - Kilepes");
		cout << endl;
		cin >> x;
		if (x == 1) {
			system("cls");
			listakezeles<szereplo*> szereplok(200);

			srand(time(0));

			szereplo* cs = new csiga(rand() % 70 + 1, 9);

			szereplok.hozzaad(cs);
			for (int i = 0; i < 30; i++) {
				szereplok.hozzaad(new jobbrolbalra(rand() % 70 + 1, rand() % 4 + 4));
				szereplok.hozzaad(new dani_szereplo(rand() % 70 + 1, rand() % 3 + 1));
			}

			bool elet = true;

			while (!GetKeyState(VK_F10) && elet) {
				for (int i = 0; i < szereplok.elemszam(); i++) {
					szereplok[i]->rajzol();
				}

				std::this_thread::sleep_for(160ms);

				for (int i = 0; i < szereplok.elemszam(); i++) {
					if (cs != szereplok[i] && cs->utkozike(*szereplok[i])) {
						elet = false;
						display::end(0,0,"Vesztettel");
						break;
					}
				}
				bool cel_v = false;
				szereplo* cel = new celvonal(1, 1);
				int lep = 0;
				if (cs == cel) {
					cel_v = true;
					system("cls");
					cout << "Gratulalok nyertel!" << " Lepeseid szam: " << lep;
					break;
				}if (GetAsyncKeyState(VK_RIGHT) == true || GetAsyncKeyState(VK_DOWN) == true || GetAsyncKeyState(VK_UP) == true || GetAsyncKeyState(VK_LEFT) == true)
				{
					lep++;
					//return lep; // nem j�, le�ll�tja a progit :(

					//�tletet k�rn�k, hogy sz�moljam a l�p�seket rekord �rt�kel�s szempontj�b�l (mennyi l�p�s alatt �r a c�lba)
				}



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
		else { 
			system("cls");
		}
	} while (x != 2);
	if (x == 2) {
		cout << "Vege!";
	}
}