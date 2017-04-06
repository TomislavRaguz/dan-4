// Bankomat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "operacije.h"

int main()
{
	map<string, Korisnik> baza;
	load(baza);
	Korisnik trenutni = autentikacija(baza);
	menu(trenutni);
	write(baza);
}