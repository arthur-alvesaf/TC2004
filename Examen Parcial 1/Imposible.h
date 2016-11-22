class Imposible : CloneCake<Cake, Imposible> {
	friend class FactoryConcrete;

	void batido() {
		std::out << "imposible batido" << std::endl;
	}
	void amasado() {
		std::out << "imposible amasado" << std::endl;
	}
	void horneado() {
		std::out << "imposible horneado" << std::endl;
	}
	void decorado() {
		std::out << "imposible decorado" << std::endl;
	}
	void empacado() {
		std::out << "imposible empacado" << std::endl;
	}

	virtual ~Imposible(){};

private:
	Imposible(){};
};