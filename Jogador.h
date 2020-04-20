#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>

using namespace std;

class Jogador {
private:
	char letra;
	string nome;

public:
	Jogador(string n, char l) : nome(n), letra(l) {}

	string getNome();
	char getLetra();
};

#endif // !JOGADOR_H


