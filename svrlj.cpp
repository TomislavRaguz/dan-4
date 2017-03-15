// svrlj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <ctime>
#include <string>


using namespace std;


void main() {
	srand(time(NULL));
	int rand1, rand2;
	string winner;
	rand1 = rand() % 6;
	rand2 = rand() % 6;
	if (rand1 > rand2) { winner = "Igrac 1 je pobjedio."; }
	if (rand2 < rand1) { winner = "Igrac 2 je pobjedio.";}
	else { winner = "Zavrsilo je izjednaceno."; }
	ofstream output;
	output.open("primjer.txt", ios::app);
	output << winner;

}

