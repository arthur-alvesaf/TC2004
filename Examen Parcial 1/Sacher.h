class Sacher : CloneCake<Cake, Sacher> {
	friend class FactoryConcrete;

	void batido() {
		std::out << "sacher batido" << std::endl;
	}
	void amasado() {
		std::out << "sacher amasado" << std::endl;
	}
	void horneado() {
		std::out << "sacher horneado" << std::endl;
	}
	void decorado() {
		std::out << "sacher decorado" << std::endl;
	}
	void empacado() {
		std::out << "sacher empacado" << std::endl;
	}

	virtual ~Sacher(){};

private:
	Sacher(){};
};