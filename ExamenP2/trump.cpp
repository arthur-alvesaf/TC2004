#include "subject.cpp"

class Trump : public Subject
{
	char handle;
public:
	Trump(char _handle) {
		handle = _handle;
	}
	void Say(string statement) {
		Notify(handle, statement);
	}
};