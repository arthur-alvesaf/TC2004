#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Subject {
	std::vector<ConcreteObserver*> list;

public:
	void Attach(ConcreteObserver *product) {
		list.push_back(product);
	}

	void Notify(char handle, string statement) {
		for(vector<ConcreteObserver*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
		{
			if(*iter != 0)
			{
				(*iter)->Publish(handle, statement);
			}
		}
	}
};