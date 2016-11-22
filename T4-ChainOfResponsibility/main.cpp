// Program by Arthur Alves Araujo Ferreira all rights reserved.
// ITESM matrícula A01022593
// Chain of responsibility implementation (DNS server requests)

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
#include "handler.h"
#include "server1.h"
#include "server2.h"
#include "server3.h"

int main() {
	srand(time(0));
	Server1 dns;
	Server2 scndServer;
	Server3 thrdServer;
	dns.add(&scndServer);
	dns.add(&thrdServer);
	// In case the request passes through all servers, the last server
	// sends it back to the first server
	thrdServer.setNext(&dns);

	for (int i = 1; i <= 10; i++)
		dns.handle(i);

	return 0;
} 