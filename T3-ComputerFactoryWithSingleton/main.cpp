// Program by Arthur Alves Araujo Ferreira all rights reserved.
// ITESM matrícula A01022593
// Computer factory program with singleton

#include <string>
#include <iostream>
using namespace std;
#include "computerFactoryConcrete.h"

int main() {
	Computer *d = ComputerFactoryConcrete::GetInstance()->create("Desktop");
	Computer *l = ComputerFactoryConcrete::GetInstance()->create("Laptop");
	Computer *n = ComputerFactoryConcrete::GetInstance()->create("Netbook");
	Computer *t = ComputerFactoryConcrete::GetInstance()->create("Tablet");

	return 0;
}