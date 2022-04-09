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
#include "visszaszamol.h"
#include "help.h"


using namespace std;

int main() {
	cout << "Udvozollek a PENCSIGA jatekban!";
	int x;
	do {
		display::end(0,1,"1 - Uj jatek egy jatekossal");
		display::end(0, 2, "2 - Uj jatek ket jatekossal");
		display::end(0,3,"3 - Kilepes");
		cout << endl;
		cin >> x;
		if (x == 1) {
			system("cls");
			listakezeles<szereplo*> szereplok(200);

			srand(time(0));

			szereplo* cs = new csiga(rand() % 70 + 1, 9);
			szereplo* vissza = new visszaszamlal(0, 12);
			szereplo* segitseg = new help(0, 15);
			szereplo* tibor = new xszarnyu(rand() % 50 + 1, 9);

			
			szereplok.hozzaad(cs);
			szereplok.hozzaad(vissza);
			szereplok.hozzaad(segitseg);
			
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
						display::end(0,0,"Vesztettel!");
						cout << " Lepeseid szama: " << cs->lepes();
						break;
					}
					if (cs->end()==true) {
						elet = false;
						display::end(0, 0, "Nyertel!");
						cout << " Lepeseid szama: " << cs->lepes();
						break;
					}
				}
				for (int i = 0; i < szereplok.elemszam(); i++) {
					if (szereplok[i]->vege()) {
						delete szereplok.eltavolit(i);
						i--;
					}

				}

				/*if (GetAsyncKeyState(VK_NUMPAD6)) {
					tibor->x = x++;
				}
				if (GetAsyncKeyState(VK_NUMPAD2)) {
					tibor->y = y++;
				}
				if (GetAsyncKeyState(VK_NUMPAD8)) {
					tibor->y = y--;
				}*/
				
				if (GetAsyncKeyState(VK_NUMPAD9)) {
					cout << "|";

					/*listakezeles<szereplo*> lovedekek(200);
					szereplo* lov = new lovedek(x, y - 1);
					lovedekek.hozzaad(lov);*/
				}

			}

			while (szereplok.elemszam() > 0) {
				delete szereplok.eltavolit(0);
			}

		}
		else if (x == 2) {
			system("cls");
			listakezeles<szereplo*> szereplok(200);

			srand(time(0));
			
			szereplo* cs = new csiga(rand() % 70 + 1, 9);
			szereplo* vissza = new visszaszamlal(0, 12);
			szereplo* tibor = new xszarnyu(rand() % 50 + 1, 9);
			szereplo* segitseg = new help(0, 15);

			szereplok.hozzaad(cs);
			szereplok.hozzaad(vissza);
			szereplok.hozzaad(tibor);
			szereplok.hozzaad(segitseg);
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
					if (szereplok[i]->tag != TAG_jatekos && cs != szereplok[i] && cs->utkozike(*szereplok[i]) || tibor != szereplok[i] && tibor->utkozike(*szereplok[i])) {
						elet = false;
						display::end(0, 0, "Vesztettel!");
						cout << " Lepeseid szama: " << cs->lepes();
						break;
					}
				}
				if (GetAsyncKeyState('W')) {
					dynamic_cast<xszarnyu*>(tibor)->fel();
				}

				bool cel_v = false;
				szereplo* cel = new celvonal(1, 1);
				if (cs == cel) {
					cel_v = true;
					system("cls");
					cout << "Gratulalok nyertel!" << " Lepeseid szama: ";
					break;

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
	} while (x != 3);
	if (x == 2) {
		cout << "Vege!";
	}
}