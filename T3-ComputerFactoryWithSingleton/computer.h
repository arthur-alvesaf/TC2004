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