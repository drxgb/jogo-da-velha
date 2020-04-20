#include <iostream>
#include <iomanip>
#include "ui.h"

using namespace std;

/*
	==========================================================
				M�TODOS P�BLICOS
	==========================================================
*/

void ui::titulo() {	
	linha('=', 60);
	cout << setw(30) << "JOGO DA VELHA" << endl;
	linha('=', 60);
	cout << endl;
}

/*
	==========================================================
				M�TODOS PRIVADOS
	==========================================================
*/

void ui::linha(char c, int f) {
	cout << setfill(c) << setw(f) << '\0' << setfill(' ') << endl;
}