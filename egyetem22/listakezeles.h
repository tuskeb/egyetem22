#pragma once
#include <iostream>
//Tanár Úr
template <typename T>
class listakezeles
{
	private:
		T* adatok = NULL;
		int m_meret = 0;
		int m_elemszam = 0;
	public:
		listakezeles(int meret) {
			this->m_meret = meret;
			adatok = new T[meret];
		}

		~listakezeles() {
			delete adatok;
		}

		T& operator[](const int index) {
			return adatok[index];
		}

		int hozzaad(T adat) {
			if (m_elemszam < m_meret)
			{
				adatok[m_elemszam] = adat;
				m_elemszam++;
			}
			else {
				//cout << "Megtelt a tömb";
				return -1;
			}
		}

		T eltavolit(int index) {
			T r = adatok[index];
			for (int i = index; i < m_meret - 1; i++) {
				adatok[i] = adatok[i + 1];
			}
			adatok[m_meret-1] = NULL;
			m_elemszam--;
			return r;
		}

		
		int eltavolitertek(T ertek) {
			int db = 0;
			for (int i = 0; i < m_elemszam; i++) {
				if (adatok[i] == ertek) {
					eltavolit(i);
					db++;
				}
			}
			return db;
		}
		

		const int& meret() {
			return m_meret;
		}

		const int& elemszam() {
			return m_elemszam;
		}

};