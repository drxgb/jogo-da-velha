#include <iostream>
#include <iomanip>
#include "ui.h"

using namespace std;

/*
	==========================================================
				MÉTODOS PÚBLICOS
	==========================================================
*/

void ui::titulo() {	
	linha('=', 60);
	cout << setw(30) << "JOGO DA VELHA" << endl;
	linha('=', 60);
	cout << endl;
}

void ui::desenhaTabuleiro() {
	int offset = 15;
	int width = 3;
	int height = 3;
	
	// Desenhar campo de acordo com o tamanho (as linhas também contam como tile)
	for (int y = 0; y < height * 2 - 1; y++) {
		cout << setw(offset) << ' ';
		for (int x = 0; x < width * 2 - 1; x++) {
			if (y % 2 == 0) {
				// Desenhar marcações dos jogadores, caso tenham
				if (x % 2 == 0) {
					cout << ' ';
				}
				else {
					cout << '|';
				}
			}
			else {
				// Desenhar linhas separadoras
				if (x % 2 == 0) {
					cout << '-';
				}
				else {
					cout << '+';
				}
			}
		}
		cout << endl;
	}

	cout << endl;
}

/*
	==========================================================
				MÉTODOS PRIVADOS
	==========================================================
*/

void ui::linha(char c, int f) {
	cout << setfill(c) << setw(f) << '\n' << setfill(' ');
}