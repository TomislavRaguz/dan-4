// Studenti.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Student {
	Student(string pime, string pprezime, double pprosjek) { ime = pime; prezime = pprezime;prosjek = pprosjek }
	string ime;
	string prezime;
	double prosjek;
};

void upis(vector<Student> popis) {
	string mime, mprezime;
	double mprosjek;
	cout << "Upisite novog studenta:(ime,prezime,prosjek)";
	cin >> mime >> mprezime >> mprosjek;
	popis.push_back(Student(mime, mprezime, mprosjek));
}

void ispis(vector<Student> popis) {
	cout << "\tIME\tPREZIME\tPROSJEK\n";
	for (int i = 0; i < popis.size(); i++) {
		cout << "\t" << popis[i].ime << "\t" << popis[i].prezime << "\t" << popis[i].prosjek << endl;
	}
}

void sort_uspjeh(vector<Student> popis) {
	for (int i = 0; i < popis.size(); i++) {
		double min = popis[i].prosjek;
		int pos = i;
		for (int j = i; j < popis.size(); j++) {
			if (popis[j].prosjek < min) { min = popis[j].prosjek; pos = j; }
		}
		Student temp = popis[i];
		popis[i] = popis[pos];
		popis[pos] = temp;
	}
}

void load(vector<Student> popis) {
	ifstream citam;
	string mime, mprezime;
	double mprosjek;
	citam.open("rezultati.txt");
	while (citam) {
		citam >> mime >> mprezime >> mprosjek;
		popis.push_back(Student(mime, mprezime, mprosjek));
	}
	citam.close();
}

void save(vector<Student> popis) {
	ofstream pisem;
	pisem.open("rezultati.txt");
	for (int i = 0; i < popis.size(); i++) {
		pisem << popis[i].ime << " " << popis[i].prezime << " " << popis[i].prosjek << endl;
	}
	pisem.close();
}

int main()
{
    return 0;
}

