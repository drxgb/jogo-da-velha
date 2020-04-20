#include <iostream>
#include <locale>
#include "ui.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");

	ui::titulo();
	return 0;
}