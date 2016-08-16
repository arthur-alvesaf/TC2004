// Program by Arthur Alves Araujo Ferreira all rights reserved.
// ITESM matrícula A01022593
// Computer factory program

#include <iostream>
using namespace std;

class Computer {
public:
	virtual void selectComponents() {};
	virtual void assemble() {
		cout << "Assembling computer." << endl;
	}
	virtual void prepare() {
		cout << "Installing software and preparing for sale." << endl;
	}
	virtual void package() {
		cout << "Packaging computer for shippig and sale." << endl << endl;
	}

};

class Desktop : public Computer {
public:
	void selectComponents() {
		cout << "Component selection for: Desktop Computer" << endl;
		cout << "  Will it have a keyboard? _y" << endl;
		cout << "  Will it include a mouse? _n" << endl;
		cout << "  Will it include a monitor? _y" << endl;
		cout << "  *Information recieved. Continuing production." << endl;
	}
};

class Laptop : public Computer {
public:
	void selectComponents() {
		cout << "Component selection for: Laptop Computer" << endl;
		cout << "  Will it be touchscreen? _y" << endl;
		cout << "  Will it include a mouse? _n" << endl;
		cout << "  Will it include a CD reader? _y" << endl;
		cout << "  *Information recieved. Continuing production." << endl;
	}
};

class Netbook : public Computer {
public:
	void selectComponents() {
		cout << "Component selection for: Netbook Computer" << endl;
		cout << "  Will it be touchscreen? _y" << endl;
		cout << "  Will it include a carry case? _n" << endl;
		cout << "  What color is it in? _y" << endl;
		cout << "  *Information recieved. Continuing production." << endl;
	}
};

class Tablet : public Computer {
public:
	void selectComponents() {
		cout << "Component selection for: Tablet Computer" << endl;
		cout << "  Will it include a protective case? _y" << endl;
		cout << "  Will it include a screen protection? _n" << endl;
		cout << "  What color is it in? _y" << endl;
		cout << "  *Information recieved. Continuing production." << endl;
	}
};

class ComputerFactory {
public:
	Computer *create(char const * type) {
		Computer *newComp = NULL;

		if (type == "Desktop")
			newComp = new Desktop();
		else if (type == "Laptop")
			newComp = new Laptop();
		else if (type == "Netbook")
			newComp = new Netbook();
		else if (type == "Tablet")
			newComp = new Tablet();

		if (newComp) {
			newComp->selectComponents();
			newComp->assemble();
			newComp->prepare();
			newComp->package();
		}
	}
}; 

int main() {
	ComputerFactory *cf = new ComputerFactory();

	Computer *d = cf->create("Desktop");
	Computer *l = cf->create("Laptop");
	Computer *n = cf->create("Netbook");
	Computer *t = cf->create("Tablet");

	return 0;
}