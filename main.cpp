#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	cout << "Ol�, Mundo! o/" << endl;
	return 0;
}