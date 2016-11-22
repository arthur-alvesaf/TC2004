class Cake {
public:
	
	virtual void batido() = 0;
	virtual void amasado() = 0;
	virtual void horneado() = 0;
	virtual void decorado() = 0;
	virtual void empacado() = 0;
	
	void getInfo() {
		std::out << "cake!" << std::endl;
	}

	virtual ~Cake() {};
};