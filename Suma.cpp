// Suma.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void suma(int n);

int main()
{
	int n;
	cin >> n;
	suma(n);
}

void suma(int n) {
	int zbroj;
	zbroj = 0;
	for (int i = 0; i <= n; i++) {
		zbroj += i;
	}
	cout << zbroj;
}