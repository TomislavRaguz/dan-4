// svrlj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void prikaz(vector<string> popis);
void unos(vector<string> popis);
void pretraga(vector<string> popis);



void main() {
	int x,b=0;
	vector<string> popis;
	ifstream input;
	string buffer;
	input.open("primjer.txt");
	while (input) {
		b++;
		getline(input, buffer);
		popis.push_back(buffer);
	}
	input.close();
	cout << " 1.prikaz \n 2.unos \n 3.pretraga";
	cin >> x;
	switch (x) {
	case 1:
		prikaz(popis);
		break;
	case 2:
		unos(popis);
		break;
	case 3:
		pretraga(popis);
		break;
	}
}
void prikaz(vector<string> popis) {
	for (int i = 0; i < popis.size(); i++) {
		cout << popis[i];
	}
}

void unos(vector<string> popis) {
	ofstream output;
	output.open("primjer.txt", ios::app);
	string ime, prezime, id, priprema;
	cout << "Unesite id, ime i prezime: ";
	cin >> id >> ime >> prezime;
	priprema = id +" "+ ime +" "+ prezime;
	output << priprema;
	output.close();
}

void pretraga(vector<string> popis) {
	ifstream input;
	string indeks;
	int pozicija;
	input.open("primjer.txt");
	string buffer;
	while (input) {
		input >> buffer;
		cout << "Upisite indeks trazenog studenta: ";
			cin >> indeks;
			pozicija = indeks.find(buffer);
			cout << buffer.substr(pozicija);
	}
}