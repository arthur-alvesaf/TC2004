// Base chain class. Has one pointer to the next instance of
// a handler in case it can't handle the request.

class Handler
{
	Handler *next;
public:
	Handler() { next = 0; }
	
	void setNext(Handler *nextH) {
		next = nextH;
	}

	void add(Handler *newH) {
		if (next) {
			next->add(newH);
		} else {
			next = newH;
		}
	}

	virtual void handle(int input) {
		next->handle(input);
	}
};