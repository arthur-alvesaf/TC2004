#include "computer.h"
#include "laptop.h"
#include "netbook.h"
#include "desktop.h"
#include "tablet.h"

class ComputerFactory {
public:
	virtual Computer *createComputer(std::string type) = 0;

	Computer *create(std::string type) {
		Computer *newComp = createComputer(type);

		if (newComp) {
			newComp->selectComponents();
			newComp->assemble();
			newComp->prepare();
			newComp->package();
		} else {
			cout << type << " is not type of computer we have." << endl;
		}

		return newComp;
	}
}; 

