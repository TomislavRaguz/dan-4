// prosjekunizu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
double prosjek(double polje[], int n);

int main()
{
	int n;
	cin >> n;
	double *polje = new double[n];
	for (int i = 0; i < n; i++) {
		cin >> polje[i];
	}
	cout << prosjek(polje, n);
}

double prosjek(double polje[], int n) {
	double suma=0;
	for (int i = 0; i < n; i++) {
		suma += polje[i];
	}
	return suma / n;
}