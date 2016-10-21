#include "subject.cpp"

class Hilary : public Subject
{
	char handle;
public:
	Hilary(char _handle) {
		handle = _handle;
	}
	void Say(string statement) {
		Notify(handle, statement);
	}
};