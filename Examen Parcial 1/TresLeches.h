class TresLeches : CloneCake<Cake, TresLeches> {
	friend class FactoryConcrete;

	void batido() {
		std::out << "tres leches batido" << std::endl;
	}
	void amasado() {
		std::out << "tres leches amasado" << std::endl;
	}
	void horneado() {
		std::out << "tres leches horneado" << std::endl;
	}
	void decorado() {
		std::out << "tres leches decorado" << std::endl;
	}
	void empacado() {
		std::out << "tres leches empacado" << std::endl;
	}

	virtual ~TresLeches(){};

private:
	TresLeches(){};
};