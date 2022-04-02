#pragma once
//Tanár Úr
template <typename T>
class listakezeles
{
	private:
		T* adatok = NULL;
		int mmeret = 0;

	public:
		DinamikusTomb(int meret) {
			this->mmeret = meret;
			adatok = new T[meret];
		}
		~DinamikusTomb() {
			delete adatok;
		}
		T& operator[](const int index) {
			return adatok[index];
		}
		const int& meret() {
			return mmeret;
		}
};