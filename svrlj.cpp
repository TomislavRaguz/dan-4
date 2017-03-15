// svrlj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


	void main() {

		int x, y, z;
		cout << "Unesite velicinu polja : " << endl;
		cin >> x >> y >> z;

		int ***p_p_polje = new int**[x];

		for (int i = 0; i < x; i++) {
			p_p_polje[i] = new int*[y];
		}

		for (int i = 0; i < x; i++) {
			for (int j = 0; j < x; j++)
			{
				p_p_polje[i][j] = new int[z];
			}
		}


		for (int i = 0; i < x; i++) {

			for (int j = 0; j < y; j++) {


				for (int k = 0; k < z; k++) {
					cout << "Unesite vrijednost polja" << "[" << i << "], [" << j << "],[" << k << "]";
					cin >> p_p_polje[i][j][k];
				}
			}
		}

		for (int i = 0; i < x; i++) {

			for (int j = 0; j < y; j++) {
				for (int k = 0; k < z; k++) {
					cout << p_p_polje[i][j][k] << "\t";
				}
			}
			cout << endl;
		}

		for (int i = 0; i < x; i++) {

			delete p_p_polje[i];

		}


		delete p_p_polje;
		p_p_polje = nullptr;


	}

	/*for (int i = 0; i < x; i++) { //------> ispisujemo
		for (int j = 0; j < y; j++) {
			cout << p_p_p_polje[g][i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < x; i++) {
		delete p_p_p_polje[i];
	}
	delete p_p_p_polje;
	p_p_p_polje = nullptr;
}



/* -da bismo izmjenili varijablu u metodi koristimo njenu adresu umjesto samo varijablu u definiciji
 - kad radimo pokazivac prvo pisemo tip, pa znak za  pokazivac *, ime pokazivaca i onda dinamicka alokacija npr
 int *p_polje = new int[x] kod dinamicke alokacije mozemo napravit polja koliko hocemo    
  - int x*/