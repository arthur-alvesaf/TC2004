#include "observer.cpp"

class ConcreteObserver : Observer
{
	std::string name;
	std::string newsType;
	std::vector<std::string> news;

public:
	ConcreteObserver(std::string _name, std::string _newsType) {
		name = _name;
		newsType = _newsType;
	}
	void Publish(char handle, std::string statement) {
		for(int i = 0; i < newsType.size(); i++) {
			if (newsType[i] == handle) {
				news.push_back(statement);
			}
		}
	}
};
