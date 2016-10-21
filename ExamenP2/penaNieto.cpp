#include "subject.cpp"

class PenaNieto : public Subject
{
	char handle;
public:
	PenaNieto(char _handle) {
		handle = _handle;
	}
	void Say(string statement) {
		Notify(handle, statement);
	}
};