// Program by Arthur Alves Araujo Ferreira
// Student at ITESM - A01022593
// Computer Factory implementation with singleton

#include <iostream>
#include <string>
using namespace std;

class Computer {
public:
	virtual void selectComponents() = 0;
	virtual void assemble() = 0;
	virtual void prepare() = 0;
	virtual void package() = 0;
};

class Laptop : public Computer {
private:
	Laptop(){};
public:
	friend class FactoryConcrete;
	void selectComponents() {
		cout << "Part 1 of creating laptop: part selection." << endl;
	}
	void assemble() {
		cout << "Part 2 of creating laptop: assembly." << endl;
	}
	void prepare() {
		cout << "Part 3 of creating laptop: software installation." << endl;
	}
	void package() {
		cout << "Part 4 of creating laptop: packaging for sale." << endl;
	}
};

class Desktop : public Computer {
private:
	Desktop(){};
public:
	friend class FactoryConcrete;
	void selectComponents() {
		cout << "Part 1 of creating desktop: part selection." << endl;
	}
	void assemble() {
		cout << "Part 2 of creating desktop: assembly." << endl;
	}
	void prepare() {
		cout << "Part 3 of creating desktop: software installation." << endl;
	}
	void package() {
		cout << "Part 4 of creating desktop: packaging for sale." << endl;
	}
};

class Netbook : public Computer {
private:
	Netbook(){};
public:
	friend class FactoryConcrete;
	void selectComponents() {
		cout << "Part 1 of creating netbook: part selection." << endl;
	}
	void assemble() {
		cout << "Part 2 of creating netbook: assembly." << endl;
	}
	void prepare() {
		cout << "Part 3 of creating netbook: software installation." << endl;
	}
	void package() {
		cout << "Part 4 of creating netbook: packaging for sale." << endl;
	}
};

class Tablet : public Computer {
private:
	Tablet(){};
public:
	friend class FactoryConcrete;
	void selectComponents() {
		cout << "Part 1 of creating tablet: part selection." << endl;
	}
	void assemble() {
		cout << "Part 2 of creating tablet: assembly." << endl;
	}
	void prepare() {
		cout << "Part 3 of creating tablet: software installation." << endl;
	}
	void package() {
		cout << "Part 4 of creating tablet: packaging for sale." << endl;
	}
};

class Factory {
public:
	virtual Computer *getComputerType(string compType) = 0;

	Computer *create(string compType) {
		Computer *newComp = getComputerType(compType);

		if (newComp) {
			cout << endl << "===Producing " << compType << "===" << endl;
			newComp->selectComponents();
			newComp->assemble();
			newComp->prepare();
			newComp->package();
		} else {
			cout << endl << "Computer type \"" << compType << "\" unknown." << endl;
		}

		return newComp;
	}
};

class FactoryConcrete : public Factory {
public:
	Computer *getComputerType(string compType) {
		Computer *newComp = NULL;

		if (compType == "Desktop")
			newComp = new Desktop;
		else if (compType == "Laptop")
			newComp = new Laptop;
		else if (compType == "Netbook")
			newComp = new Netbook;
		else if (compType == "Tablet")
			newComp = new Tablet;

		return newComp;
	}

	// Singleton Implementation
	static FactoryConcrete *Instance() {
		static FactoryConcrete *instance = new FactoryConcrete;
		return instance;
	}
};

int main() {
	FactoryConcrete *factory = FactoryConcrete::Instance();

	Computer *des = factory->create("Desktop");
	Computer *des2 = factory->create("desktop");
	Computer *lap = factory->create("Laptop");
	Computer *net = factory->create("Netbook");
	Computer *tab = factory->create("Tablet");

	return 1;
}