#include "Factory.h"

class FactoryConcrete: public Factory {
public:

	Cake* createCake(std::string type) {
		if(type == "tresleches") {
			return new TresLeches;
		}
		else if(type == "sacher") {
			return new Sacher;
		}
		else if(type == "imposible") {
			return new Impossible;
		}
		return NULL;
	}

	static CakeFactoryConcrete* GetInstance(){
		static CakeFactoryConcrete* instance = new CakeFactoryConcrete;
		return instance;
	}
};