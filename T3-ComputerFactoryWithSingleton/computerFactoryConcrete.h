#include "computerFactory.h"

class ComputerFactoryConcrete: public ComputerFactory {
public:
	Computer* createComputer(std::string type) {
		Computer *newComp = NULL;
		if (type == "Desktop")
			newComp = new Desktop();
		else if (type == "Laptop")
			newComp = new Laptop();
		else if (type == "Netbook")
			newComp = new Netbook();
		else if (type == "Tablet")
			newComp = new Tablet();
		return newComp;
	}

	static ComputerFactoryConcrete* GetInstance(){
		static ComputerFactoryConcrete* instance = new ComputerFactoryConcrete;
		return instance;
	}

private:
	ComputerFactoryConcrete() { };
};