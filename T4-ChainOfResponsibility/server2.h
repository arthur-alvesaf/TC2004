// Handling class 1, in this case it is a DNS server that will process DNS
// request if it can't do it, it will pass the request on to the next server

class Server2 : public Handler
{
	// For DNS server, let's say there is a 33% chance that 
	// the server is overloaded and will send the request to 
	// another server to resolve
	bool overloaded;
public:
	void handle(int input) {
		overloaded = rand() % 3;
		if (overloaded) {
			Handler::handle(input);	
		} else {
			cout << "Request #" << input << " handled by server 2" << endl;
		}
	}
};

