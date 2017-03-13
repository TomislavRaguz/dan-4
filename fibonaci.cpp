// fibonaci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int fibonaci(int n);

int main()
{
	int n;
	cin >> n;
	cout << fibonaci(n);
}
int fibonaci(int n) {
	int ai,aii,fib;	
	if (n == 0) { return 0; }
	aii = 0;
	ai = 1;
	n -= 2;
	fib = 1;
	for (int i = 0; i <= n; i++) {
		fib = ai+aii;
		if (i == n) { return fib; }
		aii=ai;
		ai=fib;
		} 
	return fib;
 }
