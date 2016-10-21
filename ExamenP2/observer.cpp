#include <vector>

class Observer
{
public:
	virtual void Publish(char, std::string) = 0;
};