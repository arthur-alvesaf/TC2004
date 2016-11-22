// Factory.h

class Factory {
public:
	virtual Cake* createCake(std::string type) = 0;

	Cake* create(std::string type) {
		Cake* c = createCake(type);
		if(c != NULL) {
			c->batido() = 0;
			c->amasado() = 0;
			c->horneado() = 0;
			c->decorado() = 0;
			c->empacado() = 0;
			return c;
		}
		std::cout << "type not recognized" << std::endl;
		return NULL;
	}
}